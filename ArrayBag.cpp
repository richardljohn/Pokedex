//  Created by Frank M. Carrano and Timothy M. Henry.
//  Copyright (c) 2017 Pearson Education, Hoboken, New Jersey.

//  Modified by Tiziana Ligorio for CSCI 235 Hunter college 2019

/** Implementation file for the class ArrayBag.
 @file ArrayBag.cpp */

#include "ArrayBag.hpp"
#include <iostream>

/** default constructor**/
template<class T>
ArrayBag<T>::ArrayBag(): item_count_(0)
{
}  // end default constructor


/**
 @return item_count_ : the current size of the bag
 **/
template<class T>
int ArrayBag<T>::getCurrentSize() const
{
	return item_count_;
}  // end getCurrentSize


/**
 @return true if item_count_ == 0, false otherwise
 **/
template<class T>
bool ArrayBag<T>::isEmpty() const
{
	return item_count_ == 0;
}  // end isEmpty


/**
 @return true if new_etry was successfully added to items_, false otherwise
 **/
template<class T>
bool ArrayBag<T>::add(const T& new_entry)
{
	bool has_room = (item_count_ < DEFAULT_CAPACITY);
	if (has_room && !contains(new_entry))
	{
		items_[item_count_] = new_entry;
		item_count_++;
        return true;
	}  // end if

	return false;
}  // end add

template<class T> //This is the method to display. 
void ArrayBag<T>::display() const{
   for(int i = 0; i < item_count_; i++){ //We loop through the entire bag with a for loop and the loop is equal to the amount of items in the bag. 
      std::string c = ","; //We have a variable that stores a comma.
      if(i < item_count_-1) {
         std::cout << items_[i] << c; //For all the elements we print out a comma at the end of all the elements. 
      }
      else{
         std::cout << items_[i]; //For the last element we dont print out a comma since nothing follows the the laast element. 
      }
   }
   std::cout << std::endl; //There is a line that will be printed at the end that seperates our bag from other stuffs. 
} //end of display. 

/**
 @return true if an_etry was successfully removed from items_, false otherwise
 **/
template<class T>
bool ArrayBag<T>::remove(const T& an_entry)
{
   int found_index = getIndexOf(an_entry);
	bool can_remove = !isEmpty() && (found_index > -1);
	if (can_remove)
	{
		item_count_--;
		items_[found_index] = items_[item_count_];
	}  // end if

	return can_remove;
}  // end remove


/**
 @post item_count_ == 0
 **/
template<class T>
void ArrayBag<T>::clear()
{
	item_count_ = 0;
}  // end clear


/**
 @return the number of times an_entry is found in items_
 **/
template<class T>
int ArrayBag<T>::getFrequencyOf(const T& an_entry) const
{
   int frequency = 0;
   int cun_index = 0;       // Current array index
   while (cun_index < item_count_)
   {
      if (items_[cun_index] == an_entry)
      {
         frequency++;
      }  // end if

      cun_index++;          // Increment to next entry
   }  // end while

   return frequency;
}  // end getFrequencyOf

template<class T> 
void ArrayBag<T>::operator+=(const ArrayBag<T>& a_bag){ //Implementation of the += operator. 
   std::vector <T> datOne = a_bag.toVector(); //To stop from constantly having to type in toVector we just have a variable that does it for us automatically as soon as its called. 
   for(int i = 0; i <= a_bag.getCurrentSize() && i <= (DEFAULT_CAPACITY - item_count_) ; i++) { //These are the conditions for looping the bag. 
      add(datOne[i]); //We add the element if there is space which is determined by the for loop.
   }
} //end of += operator. //Again is this necessary?


template<class T> 
void ArrayBag<T>::operator-=(const ArrayBag<T>& a_bag){ //Implementation of the -= operator. 
   std::vector<T> disOne = a_bag.toVector(); //Same thing as the += operator.
   for(int i = 0; i < a_bag.getCurrentSize(); i++) { //We will loop through the entire a_bag and scan through it. 
      if(getIndexOf(disOne[i]) > -1) { //If the element is in the bag. 
         remove(disOne[i]); //We will remove it. 
      }
   }
}

template<class T>
void ArrayBag<T>::operator/=(const ArrayBag<T>& a_bag){ //Implementation of the /= operator. 
   std::vector<T> mine = toVector(); //Same thing as the -= and += operators. 
   for(int i = 0; i < item_count_; i++){ //we will loop through the bag we are in right now, because we are scanning whatever is in it. 
      if(!a_bag.contains(mine[i])){ //if something is not in a_bag.
         remove(mine[i]); //we will remove it from the main bag. 
      }
   }
}

/**
 @return true if an_etry is found in items_, false otherwise
 **/
template<class T>
bool ArrayBag<T>::contains(const T& an_entry) const
{
	return getIndexOf(an_entry) > -1;
}  // end contains


/**
 @return a vector having the same cotntents as items_
 **/
template<class T>
std::vector<T> ArrayBag<T>::toVector() const
{
   std::vector<T> bag_contents;
	for (int i = 0; i < item_count_; i++){
		bag_contents.push_back(items_[i]);
   }
   return bag_contents;
}  // end toVector


// ********* PRIVATE METHODS **************//

/**
 @param target to be found in items_
 @return either the index target in the array items_ or -1,
 if the array does not containthe target.
 **/

template<class T>
int ArrayBag<T>::getIndexOf(const T& target) const
{
	bool found = false;
   int result = -1;
   int search_index = 0;

   // If the bag is empty, item_count_ is zero, so loop is skipped
   while (!found && (search_index < item_count_))
   {
      if (items_[search_index] == target)
      {
         found = true;
         result = search_index;
      }
      else
      {
         search_index++;
      }  // end if
   }  // end while

   return result;
}  // end getIndexOf