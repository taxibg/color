#include <iostream>
#include <iomanip>
#include <cstdint>
#include <typeinfo>

#include "color/color.hpp"

int main( int argc, char *argv[] )
 {
  using namespace color;
  using namespace std;

  cout << "rgb<std::uint8_t > is: " << typeid( trait::container< rgb< std::uint8_t  >::category_type >::instance_type ).name() << endl;
  cout << "rgb<std::uint32_t> is: " << typeid( trait::container< rgb< std::uint32_t >::category_type >::instance_type ).name() << endl;
  cout << "rgb<float        > is: " << typeid( trait::container< rgb< float         >::category_type >::instance_type ).name() << endl;
  cout << "rgb<double       > is: " << typeid( trait::container< rgb< double        >::category_type >::instance_type ).name() << endl;
  cout << "rgb<long double  > is: " << typeid( trait::container< rgb< long double   >::category_type >::instance_type ).name() << endl;
  return EXIT_SUCCESS;
 }
