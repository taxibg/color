#ifndef color_rgb_trait_container_splitGGGG
#define color_rgb_trait_container_splitGGGG

#include "../../category.hpp"

#include "../../../generic/type/split4.hpp"

#include "../../../_internal/utility/container/split4.hpp"

#include "../../../generic/trait/container.hpp"



namespace color
 {
  namespace trait
   {

    template< unsigned first_position, unsigned second_position, unsigned third_position, unsigned fourth_position >
     struct container< ::color::category::rgb< ::color::category::_internal::rgba_scramble< ::color::type::splitGGGG_t, first_position, second_position, third_position, fourth_position > > >
      : public ::color::_internal::utility::container::splitGGGG
      {
      };

   }
 }

#endif
