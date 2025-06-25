file(REMOVE_RECURSE
  "bello"
  "bello.pdb"
)

# Per-language clean rules from dependency scanning.
foreach(lang )
  include(CMakeFiles/bello.dir/cmake_clean_${lang}.cmake OPTIONAL)
endforeach()
