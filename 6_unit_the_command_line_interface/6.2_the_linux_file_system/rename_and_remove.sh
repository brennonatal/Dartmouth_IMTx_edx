touch file-1

mkdir dir-1

mv file-1 dir-1 # Move [file] [destination]

mkdir dir-2

mv dir-1 new-dir # mv can be used to rename as well 
		 # if the new name doesn't match with other files or directories
		 # otherwise it will overwrite it

mv dir-1 -i dir-2 #asks if you are sure before overwriting
