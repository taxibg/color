#ifndef color__internal_utility_container_unsigned
#define color__internal_utility_container_unsigned

// ::color::_internal::utility::container::Unsigned< unsigned_name,  index_name,  length, width>

#include "../type/index.hpp"
#include "../type/traitp.hpp"

namespace color
 {
  namespace _internal
   {
    namespace utility
     {
      namespace container
       {

        template< typename unsigned_name, typename value_name, typename index_name, unsigned length, unsigned width >
          struct Unsigned
           {
            public:

              typedef unsigned_name  unsigned_type;
              typedef value_name     value_type;
              typedef index_name     index_type;
              typedef unsigned_name  instance_type;
              
              typedef color::_internal::utility::container::Unsigned<unsigned_name,value_name,index_name,length,width> this_type;

              typedef instance_type const      const_type;
              typedef instance_type const&     return_image_type;
              typedef instance_type      &     return_type;
              typedef instance_type const&     input_const_type;
              typedef instance_type      &     input_type;
              typedef instance_type      &     output_type;

              typedef ::color::_internal::utility::type::index< index_type >   index_trait_type;

              typedef typename index_trait_type::instance_type     index_instance_type;
              typedef typename index_trait_type::input_const_type  index_input_const_type;
              typedef typename index_trait_type::return_image_type index_return_image_type;

              typedef ::color::_internal::utility::type::traitP< value_name >         component_trait_type;

              typedef typename component_trait_type::const_type           component_const_type;
              typedef typename component_trait_type::instance_type        component_type;
              typedef typename component_trait_type::return_image_type    component_return_const_type;
              typedef typename component_trait_type::input_const_type     component_input_const_type;

              typedef void set_return_type;

              static component_return_const_type get( input_const_type container, index_input_const_type index )
               {
                return (component_type)(  ( container >> (  index *  width  ) ) & mask() );
               }

              template< index_instance_type index >
               static component_return_const_type get( input_const_type container )
                {
                 return (component_type)(  ( container >> (  index * width  ) ) & mask() );
                }

              static set_return_type set( input_type container, index_input_const_type index, component_input_const_type value )
               {
                container = ( container & ~(  this_type::mask() << ( index * width ) ) )  |  ( ( instance_type(value) << ( index * width ) ) );
               }

              template< index_instance_type index >
               static set_return_type set( input_type container, component_input_const_type value )
                {
                 container = ( container & ~(  this_type::mask() << ( index * width ) ) )  |  ( ( instance_type(value) ) << ( index * width ) );
                }

              static /*constexpr*/ index_return_image_type size()
               {
                static index_instance_type local_length = length;
                return local_length;
               }
             private:
               static /*constexpr*/ return_image_type mask()
                {
                 static instance_type local_mask = ((( instance_type(1) << (width-1)) - instance_type(1) )<< 1) + instance_type(1);
                 return local_mask;
                }
           };


       }
     }
   }
 }

#endif
