touch file_name #create file

rm file_name #remove file

touch my\ file #create file with a space

rm my\ file

touch 'my file' #or we can use single quotes

rm 'my file'

#if you press the enter key accidentally after open single quotes, parenthesis or brackets,
#we have to close it to finish the command line and get back to prompt.
#Or we can press ^d in a fresh line.

cat file_name #display content of file at the prompt

echo 'hello world' > file2.txt #insert output of command directly to another file

cat file2.txt > file3.txt #copy output

cat > another_file.txt #create file and edit content directly on terminal
			#Press ˆd to exit.

cat /etc/services | less #the '|' gets the output of the first command and redirects it to the second command 'less' that display a scrollable page at the console.
			 #inside the 'less' visualization we can enter /word to search for word and press n to find the next matches or N to previous matches

mkdir folder-name #make folder

rm -r folder-name #delete folder recursively (all content)

cd /
rm -ri folder-name #find the folder and asks what needs to be deleted

yes | rm -ri folder-name #the yes command prints y infinitly so it delete all files automatically

mkdir -p folder-name/subfolder-name/another-subfolder #create folders inside folders





