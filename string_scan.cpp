/*    
 *  Copyright [2018] [Jeff Tan]

  * Licensed under the Apache License, Version 2.0 (the "License");
  * you may not use this file except in compliance with the License.
  * You may obtain a copy of the License at

       http://www.apache.org/licenses/LICENSE-2.0

  * Unless required by applicable law or agreed to in writing, software
  * distributed under the License is distributed on an "AS IS" BASIS,
  * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
  * See the License for the specific language governing permissions and
  * limitations under the License.

*/

#include <iostream>
#include <string>

//this program scans a string and detects repeated words

int main() {

    //the two variables must not have the same value
    std::string previous_word = " ";
    std::string current_word = ""; 

    int recnt = 0;

    std::cout << "Enter an array of words separated by a space: " << std::endl;

    //check if input is available and provide first value
    if (std::cin >> previous_word) {

        while (std::cin >> current_word) {
            
            recnt++;

            if (previous_word == current_word) {

                recnt++;

            } else if (previous_word != current_word) {

                std::cout << '\n' << previous_word << " appears to have recurred " << recnt << " times in a row." << std::endl;
                previous_word = current_word;
                recnt = 0;

            }

        }

    }

}