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

int main() {
    //initialize required variables with empty string (just in case something happens)
    std::string first_name = ""; 
    std::string last_name = "";
    //initialize user age with 0 just in case something happens
    double age = 0;

    std::cout << "Please enter your first and second names: " << std::endl;
    std::cin >> first_name >> last_name;

    std::cout << "\nGreat! Now enter your age: " << std::endl;
    std::cin >> age;

    //convert age from years to months
    age *= 12;

    std::cout << "\nHello, " << first_name + " " + last_name << ". Aged " << age << " months. " << std::endl;

    return 0;

}