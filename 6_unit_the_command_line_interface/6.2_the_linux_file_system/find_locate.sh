echo p*					# search for all files in the current directory starting with letter p

echo /usr/bin/a* 			# search for all files in this path starting with letter a

echo /usr/bin/a??	 		# search for all files starting with 'a' with 3 letters

echo /usr/bin/??? 			# all files with 3 letters long

find					# print all files within directory

find / 					# print all files located at / recursively

find .					# sames as just 'find'

find . -name "program.c"		# search for specific file within directory

find . -name "prog*"			# all files at current directory starting with 'prog'

find / -name "hello"			# search in the entire system for the file 'hello', but it display many 'permission denied' files

find / -name "hello" 2> /dev/null		# to send all errors to /dev/null (black hole) haha

find / -name "*joe*" 2> /dev/null		# search for all files containing 'joe'

find / -iname "*joe*" 2> /dev/null		# search ignoring upper and lower cases 

find / -ipath "*joe*" 2> /dev/null		# search for paths containing 'joe'

find / -ipath "*joe*" 2> /dev/null | less	# redirects de output to command less
						# we can search for words displayed typing /joe for example
