<!DOCTYPE HTML PUBLIC "-//W3C//DTD HTML 4.0 Transitional//EN">
<html>
<head>
	<meta http-equiv="content-type" content="text/html; charset=utf-8"/>
	<title></title>
	<meta name="generator" content="LibreOffice 5.1.2.2 (Linux)"/>
	<meta name="created" content="00:00:00"/>
	<meta name="changed" content="00:00:00"/>
	<style type="text/css">
		@page { margin: 1in }
		p { margin-bottom: 0.1in; direction: ltr; color: #000000; line-height: 120%; text-align: left; orphans: 2; widows: 2; text-decoration: none }
		p.western { font-family: "Arial", serif; font-size: 11pt; font-style: normal; font-weight: normal }
		p.cjk { font-family: "Arial"; font-size: 11pt; font-style: normal; font-weight: normal }
		p.ctl { font-family: "Arial"; font-size: 11pt; font-style: normal; font-weight: normal }
		h1 { margin-top: 0.14in; margin-bottom: 0in; direction: ltr; color: #000000; line-height: 115%; text-align: left; page-break-inside: avoid; orphans: 2; widows: 2; text-decoration: none }
		h1.western { font-family: "Trebuchet MS", serif; font-size: 16pt; font-style: normal; font-weight: normal }
		h1.cjk { font-family: "Trebuchet MS"; font-size: 16pt; font-style: normal; font-weight: normal }
		h1.ctl { font-family: "Trebuchet MS"; font-size: 16pt; font-style: normal; font-weight: normal }
		h2 { margin-bottom: 0in; direction: ltr; color: #000000; line-height: 115%; text-align: left; page-break-inside: avoid; orphans: 2; widows: 2; text-decoration: none }
		h2.western { font-family: "Trebuchet MS", serif; font-size: 13pt; font-style: normal }
		h2.cjk { font-family: "Trebuchet MS"; font-size: 13pt; font-style: normal }
		h2.ctl { font-family: "Trebuchet MS"; font-size: 13pt; font-style: normal }
		h3 { margin-top: 0.11in; margin-bottom: 0in; direction: ltr; color: #666666; line-height: 115%; text-align: left; page-break-inside: avoid; orphans: 2; widows: 2; text-decoration: none }
		h3.western { font-family: "Trebuchet MS", serif; font-size: 12pt; font-style: normal }
		h3.cjk { font-family: "Trebuchet MS"; font-size: 12pt; font-style: normal }
		h3.ctl { font-family: "Trebuchet MS"; font-size: 12pt; font-style: normal }
		a:link { so-language: zxx }
	</style>
</head>
<body lang="en-US" text="#000000" dir="ltr">
<p align="left" style="margin-bottom: 0in; border: none; padding: 0in; line-height: 115%; page-break-inside: avoid; orphans: 2; widows: 2; page-break-after: avoid"><a name="h.qzaxbyyp97pg"></a>
<font face="Trebuchet MS, serif"><font size="5" style="font-size: 21pt"><u><b>Program
1 - Movie Chart App</b></u></font></font></p>
<p class="western" align="left" style="margin-bottom: 0in; border: none; padding: 0in; line-height: 115%; orphans: 2; widows: 2">
<i>Due Date: 5:00 p.m., March 9, 2016</i></p>
<p class="western" align="left" style="margin-bottom: 0in; border: none; padding: 0in; line-height: 115%; orphans: 2; widows: 2">
<i>All function interfaces are suggested naming and parameter
guidelines. If you feel there is a better way, you are free to alter
names, functions interfaces, etc, as long as you follow the lab and
style guidelines. </i><font color="#ff0000"><i>Output should match
exactly unless otherwise stated.</i></font></p>
<p class="western" align="left" style="margin-bottom: 0in; border: none; padding: 0in; font-weight: normal; line-height: 115%; orphans: 2; widows: 2">
<br/>

</p>
<p class="western" align="left" style="margin-bottom: 0in; border: none; padding: 0in; line-height: 115%; orphans: 2; widows: 2">
In Program 1, you will continue with C++ I/O and text processing, and
you will begin to utilize slightly more complex data structures to
store information. In particular, you will implement a singly linked
list container to store, manipulate, and save stories found in text
files. Program 1 will provide you experience with: 
</p>
<ul>
	<li/>
<p class="western" align="left" style="margin-bottom: 0in; border: none; padding: 0in; line-height: 115%; orphans: 2; widows: 2">
	a simple singly linked list container that requires pointers</p>
	<li/>
<p class="western" align="left" style="margin-bottom: 0in; border: none; padding: 0in; line-height: 115%; orphans: 2; widows: 2">
	C++ heap memory management (strategic and extensive use of new and
	delete)</p>
	<li/>
<p class="western" align="left" style="margin-bottom: 0in; border: none; padding: 0in; line-height: 115%; orphans: 2; widows: 2">
	deep copies of stored data, including in copy constructors and
	assignment operators</p>
	<li/>
<p class="western" align="left" style="margin-bottom: 0in; border: none; padding: 0in; line-height: 115%; orphans: 2; widows: 2">
	operator implementation and overloading (including assignment
	operators, unary operators, binary operators, and friend functions)</p>
	<li/>
<p class="western" align="left" style="margin-bottom: 0in; border: none; padding: 0in; line-height: 115%; orphans: 2; widows: 2">
	some simple C++ class and object design.</p>
</ul>
<p class="western" align="left" style="margin-bottom: 0in; border: none; padding: 0in; font-weight: normal; line-height: 115%; orphans: 2; widows: 2">
<br/>

</p>
<p class="western" align="left" style="margin-bottom: 0in; border: none; padding: 0in; line-height: 115%; orphans: 2; widows: 2">
This program will be difficult for some of you so please begin early
and work on it consistently. You can do it and we will help! When you
finish successfully, you will really understand linked lists,
operator overloading, deep vs. shallow copy, and more, guaranteed!</p>
<p class="western" align="left" style="margin-bottom: 0in; border: none; padding: 0in; font-weight: normal; line-height: 115%; orphans: 2; widows: 2">
<br/>

</p>
<p align="left" style="margin-bottom: 0in; border: none; padding: 0in; line-height: 115%; page-break-inside: avoid; orphans: 2; widows: 2; page-break-after: avoid"><a name="h.cov9qicgwrw8"></a>
<font face="Trebuchet MS, serif"><font size="5" style="font-size: 21pt">Part
A: Linked List</font></font></p>
<p class="western" align="left" style="margin-bottom: 0in; border: none; padding: 0in; font-weight: normal; line-height: 115%; orphans: 2; widows: 2">
<br/>

</p>
<p class="western" align="left" style="margin-bottom: 0in; border: none; padding: 0in; line-height: 115%; orphans: 2; widows: 2">
For part A you are going to write a singly linked list library. This
means you will need a LinkedList.h and a LinkedList.cpp. The design
of your linked list is largely up to you, but there are a few
restrictions you must adhere to:</p>
<ul>
	<li/>
<p class="western" align="left" style="margin-bottom: 0in; border: none; padding: 0in; line-height: 115%; orphans: 2; widows: 2">
	All instance variables must be private and encapsulated</p>
	<ul>
		<li/>
<p class="western" align="left" style="margin-bottom: 0in; border: none; padding: 0in; line-height: 115%; orphans: 2; widows: 2">
		This means that everything must be accomplished through methods and
		you cannot return a pointer to anything inside the class (head,
		current, etc)</p>
	</ul>
	<li/>
<p class="western" align="left" style="margin-bottom: 0in; border: none; padding: 0in; line-height: 115%; orphans: 2; widows: 2">
	It must be a singly linked list</p>
	<ul>
		<li/>
<p class="western" align="left" style="margin-bottom: 0in; border: none; padding: 0in; line-height: 115%; orphans: 2; widows: 2">
		No pointer to the tail of the list or pointers to previous nodes</p>
	</ul>
	<li/>
<p class="western" align="left" style="margin-bottom: 0in; border: none; padding: 0in; line-height: 115%; orphans: 2; widows: 2">
	The Node class must be in LinkedList.h, not a separate file</p>
	<li/>
<p class="western" align="left" style="margin-bottom: 0in; border: none; padding: 0in; line-height: 115%; orphans: 2; widows: 2">
	You list class must contain the following:</p>
	<ul>
		<li/>
<p class="western" align="left" style="margin-bottom: 0in; border: none; padding: 0in; line-height: 115%; orphans: 2; widows: 2">
		An internal iterator</p>
		<li/>
<p class="western" align="left" style="margin-bottom: 0in; border: none; padding: 0in; line-height: 115%; orphans: 2; widows: 2">
		A default constructor</p>
		<li/>
<p class="western" align="left" style="margin-bottom: 0in; border: none; padding: 0in; line-height: 115%; orphans: 2; widows: 2">
		A copy constructor</p>
		<li/>
<p class="western" align="left" style="margin-bottom: 0in; border: none; padding: 0in; line-height: 115%; orphans: 2; widows: 2">
		A destructor</p>
		<li/>
<p class="western" align="left" style="margin-bottom: 0in; border: none; padding: 0in; line-height: 115%; orphans: 2; widows: 2">
		All CRUD operations</p>
		<ul>
			<li/>
<p class="western" align="left" style="margin-bottom: 0in; border: none; padding: 0in; line-height: 115%; orphans: 2; widows: 2">
			How you implement these CRUD operations is up to you, but again,
			you must not expose the internals of the list. <b>This means you
			never return a pointer to any Node from any of your public
			methods.</b></p>
			<ul>
				<li/>
<p class="western" align="left" style="margin-bottom: 0in; border: none; padding: 0in; line-height: 115%; orphans: 2; widows: 2">
				You may return a pointer to the data in a Node.</p>
			</ul>
			<li/>
<p class="western" align="left" style="margin-bottom: 0in; border: none; padding: 0in; line-height: 115%; orphans: 2; widows: 2">
			You also cannot ‘index’ into the list with the method. No
			indexInsert(), indexRead(), etc.. 
			</p>
			<li/>
<p class="western" align="left" style="margin-bottom: 0in; border: none; padding: 0in; line-height: 115%; orphans: 2; widows: 2">
			However, you will need to implement a find and delete for the
			‘close’ command (described in section C).</p>
		</ul>
		<li/>
<p class="western" align="left" style="margin-bottom: 0in; border: none; padding: 0in; line-height: 115%; orphans: 2; widows: 2">
		The following overloaded operators</p>
		<ul>
			<li/>
<p class="western" align="left" style="margin-bottom: 0in; border: none; padding: 0in; line-height: 115%; orphans: 2; widows: 2">
			a &lt;&lt; b</p>
			<ul>
				<li/>
<p class="western" align="left" style="margin-bottom: 0in; border: none; padding: 0in; line-height: 115%; orphans: 2; widows: 2">
				Should take data b and add it to the linked list a</p>
			</ul>
			<li/>
<p class="western" align="left" style="margin-bottom: 0in; border: none; padding: 0in; line-height: 115%; orphans: 2; widows: 2">
			a++</p>
			<ul>
				<li/>
<p class="western" align="left" style="margin-bottom: 0in; border: none; padding: 0in; line-height: 115%; orphans: 2; widows: 2">
				advances the internal iterator 1 node if not null</p>
			</ul>
		</ul>
	</ul>
</ul>
<p class="western" align="left" style="margin-bottom: 0in; border: none; padding: 0in; line-height: 115%; orphans: 2; widows: 2">
I strongly suggest you test your Linked List rigorously before moving
on to the next part. Write a short main that runs several tests to
ensure all methods are working.</p>
<p class="western" align="left" style="margin-bottom: 0in; border: none; padding: 0in; line-height: 115%; orphans: 2; widows: 2">
<br/>

</p>
<p align="left" style="margin-bottom: 0in; border: none; padding: 0in; line-height: 115%; page-break-inside: avoid; orphans: 2; widows: 2; page-break-after: avoid"><a name="h.x96eh51zai9s"></a>
<font face="Trebuchet MS, serif"><font size="5" style="font-size: 21pt">Part
B: Making Your Linked List a Template</font></font></p>
<p class="western" align="left" style="margin-bottom: 0in; border: none; padding: 0in; font-weight: normal; line-height: 115%; orphans: 2; widows: 2">
<br/>

</p>
<p class="western" align="left" style="margin-bottom: 0in; border: none; padding: 0in; line-height: 115%; orphans: 2; widows: 2">
Once you know your Linked List class is working, you will need to
convert it to a Template class. Here is a <font color="#1155cc"><u><a href="http://www.cplusplus.com/doc/tutorial/templates/">review</a><a href="http://www.cplusplus.com/doc/tutorial/templates/">
</a><a href="http://www.cplusplus.com/doc/tutorial/templates/">of</a><a href="http://www.cplusplus.com/doc/tutorial/templates/">
</a><a href="http://www.cplusplus.com/doc/tutorial/templates/">template</a><a href="http://www.cplusplus.com/doc/tutorial/templates/">
</a><a href="http://www.cplusplus.com/doc/tutorial/templates/">classes</a></u></font>
if you need it (We will/did cover it in class though). Your new list
class should be able to store any type, which means you will have to
write your methods to match.</p>
<p class="western" align="left" style="margin-bottom: 0in; border: none; padding: 0in; font-weight: normal; line-height: 115%; orphans: 2; widows: 2">
<br/>

</p>
<p class="western" align="left" style="margin-bottom: 0in; border: none; padding: 0in; font-weight: normal; line-height: 115%; orphans: 2; widows: 2">
<br/>

</p>
<p align="left" style="margin-bottom: 0in; border: none; padding: 0in; line-height: 115%; page-break-inside: avoid; orphans: 2; widows: 2; page-break-after: avoid"><a name="h.6yws4uohqgp7"></a>
<font face="Trebuchet MS, serif"><font size="5" style="font-size: 21pt">Part
C: Update and Expand Your Movie Chart Program</font></font></p>
<p class="western" align="left" style="margin-bottom: 0in; border: none; padding: 0in; font-weight: normal; line-height: 115%; orphans: 2; widows: 2">
<br/>

</p>
<p class="western" align="left" style="margin-bottom: 0in; border: none; padding: 0in; line-height: 115%; orphans: 2; widows: 2">
You will need to make the following changes to your existing code:</p>
<ul>
	<li/>
<p class="western" align="left" style="margin-bottom: 0in; border: none; padding: 0in; line-height: 115%; orphans: 2; widows: 2">
	Changes to your MovieChart class</p>
	<ul>
		<li/>
<p class="western" align="left" style="margin-bottom: 0in; border: none; padding: 0in; line-height: 115%; orphans: 2; widows: 2">
		Replace your Users array with your Linked List. 
		</p>
		<ul>
			<li/>
<p class="western" align="left" style="margin-bottom: 0in; border: none; padding: 0in; line-height: 115%; orphans: 2; widows: 2">
			This means that any number of users can join MovieChart</p>
		</ul>
		<li/>
<p class="western" align="left" style="margin-bottom: 0in; border: none; padding: 0in; line-height: 115%; orphans: 2; widows: 2">
		Your constructor in Movie Chart class should read in from a file
		titled ‘users.txt’ which will have the following format:</p>
		<ul>
			<li/>
<p class="western" align="left" style="margin-bottom: 0in; border: none; padding: 0in; line-height: 115%; orphans: 2; widows: 2">
			Username1<br/>
First<br/>
Last<br/>
Age<br/>
Password<br/>
movie1<br/>
movie2<br/>
…</p>
		</ul>
	</ul>
</ul>
<p class="western" align="left" style="margin-left: 0.5in; text-indent: 0.5in; margin-bottom: 0in; border: none; padding: 0in; line-height: 115%; orphans: 2; widows: 2">
<br/>
		Username2<br/>
		First<br/>
		Last<br/>
		etc…</p>
<p class="western" align="left" style="margin-left: 0.5in; text-indent: 0.5in; margin-bottom: 0in; border: none; padding: 0in; font-weight: normal; line-height: 115%; orphans: 2; widows: 2">
<br/>

</p>
<ul>
	<ul>
		<ul>
			<li/>
<p class="western" align="left" style="margin-bottom: 0in; border: none; padding: 0in; line-height: 115%; orphans: 2; widows: 2">
			<i>Be sure you check if the file exists before trying to read from
			it.</i></p>
		</ul>
		<li/>
<p class="western" align="left" style="margin-bottom: 0in; border: none; padding: 0in; line-height: 115%; orphans: 2; widows: 2">
		Your destructor should clean up all memory, and write the entire
		user base information back out to the user.txt file in the same
		format.</p>
	</ul>
	<li/>
<p class="western" align="left" style="margin-bottom: 0in; border: none; padding: 0in; line-height: 115%; orphans: 2; widows: 2">
	Changes to your User Class</p>
	<ul>
		<li/>
<p class="western" align="left" style="margin-bottom: 0in; border: none; padding: 0in; line-height: 115%; orphans: 2; widows: 2">
		You will need to add a copy constructor and destructor to your User
		class.</p>
		<li/>
<p class="western" align="left" style="margin-bottom: 0in; border: none; padding: 0in; line-height: 115%; orphans: 2; widows: 2">
		Use your Singly Linked List to store your Favorites rather than an
		array 
		</p>
		<li/>
<p class="western" align="left" style="margin-bottom: 0in; border: none; padding: 0in; line-height: 115%; orphans: 2; widows: 2">
		Instead of returning a pointer to the favorites movies array, you
		should return copy (pass by value) of the favorite movies list.</p>
		<ul>
			<li/>
<p class="western" align="left" style="margin-bottom: 0in; border: none; padding: 0in; line-height: 115%; orphans: 2; widows: 2">
			Your copy constructor should automatically be called</p>
		</ul>
		<li/>
<p class="western" align="left" style="margin-bottom: 0in; border: none; padding: 0in; line-height: 115%; orphans: 2; widows: 2">
		To alter your favorite movies you will need an addMovie() and
		removeMovie() method in your User class</p>
		<li/>
<p class="western" align="left" style="margin-bottom: 0in; border: none; padding: 0in; line-height: 115%; orphans: 2; widows: 2">
		You will need to overload the == operator for the user class</p>
		<li/>
<p class="western" align="left" style="margin-bottom: 0in; border: none; padding: 0in; line-height: 115%; orphans: 2; widows: 2">
		You will need to add the MovieChart class as a friend class so you
		can access the private information in its destructor</p>
	</ul>
	<li/>
<p class="western" align="left" style="margin-bottom: 0in; border: none; padding: 0in; line-height: 115%; orphans: 2; widows: 2">
	Changes to your Driver Code</p>
	<ul>
		<li/>
<p class="western" align="left" style="margin-bottom: 0in; border: none; padding: 0in; line-height: 115%; orphans: 2; widows: 2">
		Instead of just a “Favorites” that overwrites the entire list,
		alter your Update code to have an “Add” and “Remove”
		command that adds a new movie or removes a movie from the list,
		respectively.</p>
		<li/>
<p class="western" align="left" style="margin-bottom: 0in; border: none; padding: 0in; line-height: 115%; orphans: 2; widows: 2">
		Add a command, “Close”, that closes a user's account if they
		are logged in, removing the user from the list.</p>
		<li/>
<p class="western" align="left" style="margin-bottom: 0in; border: none; padding: 0in; line-height: 115%; orphans: 2; widows: 2">
		Add the command “List” which lists all user’s usernames and
		favorite movies</p>
		<ul>
			<li/>
<p class="western" align="left" style="margin-bottom: 0in; border: none; padding: 0in; line-height: 115%; orphans: 2; widows: 2">
			do not need to be logged in for this command</p>
		</ul>
	</ul>
</ul>
<p class="western" align="left" style="margin-bottom: 0in; border: none; padding: 0in; line-height: 115%; orphans: 2; widows: 2">
<br/>
<br/>

</p>
<p align="left" style="margin-bottom: 0in; border: none; padding: 0in; line-height: 115%; page-break-inside: avoid; orphans: 2; widows: 2; page-break-after: avoid"><a name="h.6n6h7tx09dfr"></a>
<font face="Trebuchet MS, serif"><font size="5" style="font-size: 21pt">Part
D : Code Organization and Submission</font></font></p>
<ul>
	<li/>
<p class="western" align="left" style="margin-bottom: 0in; border: none; padding: 0in; line-height: 115%; orphans: 2; widows: 2">
	Required code organization:</p>
	<ul>
		<li/>
<p class="western" align="left" style="margin-bottom: 0in; border: none; padding: 0in; line-height: 115%; orphans: 2; widows: 2">
		program1.cpp</p>
		<li/>
<p class="western" align="left" style="margin-bottom: 0in; border: none; padding: 0in; line-height: 115%; orphans: 2; widows: 2">
		User.h</p>
		<li/>
<p class="western" align="left" style="margin-bottom: 0in; border: none; padding: 0in; line-height: 115%; orphans: 2; widows: 2">
		User.cpp (if needed)</p>
		<li/>
<p class="western" align="left" style="margin-bottom: 0in; border: none; padding: 0in; line-height: 115%; orphans: 2; widows: 2">
		MovieChart.h</p>
		<li/>
<p class="western" align="left" style="margin-bottom: 0in; border: none; padding: 0in; line-height: 115%; orphans: 2; widows: 2">
		MovieChart.cpp</p>
		<li/>
<p class="western" align="left" style="margin-bottom: 0in; border: none; padding: 0in; line-height: 115%; orphans: 2; widows: 2">
		LinkedList.h</p>
		<li/>
<p class="western" align="left" style="margin-bottom: 0in; border: none; padding: 0in; line-height: 115%; orphans: 2; widows: 2">
		makefile</p>
		<li/>
<p class="western" align="left" style="margin-bottom: 0in; border: none; padding: 0in; line-height: 115%; orphans: 2; widows: 2">
		readme</p>
	</ul>
	<li/>
<p class="western" align="left" style="margin-bottom: 0in; border: none; padding: 0in; line-height: 115%; orphans: 2; widows: 2">
	Create a <a href="https://docs.google.com/document/d/1kamsSBw1XoRB7Qhw2Mx4HOpSFFJ9yx7pfQejqM4ljoE/edit?usp=sharing"><font color="#1155cc"><u>readme</u></font></a>
	file following the format provided, and add it to your project
	folder</p>
	<li/>
<p class="western" align="left" style="margin-bottom: 0in; border: none; padding: 0in; line-height: 115%; orphans: 2; widows: 2">
	While inside your program1 folder, create a zip archive with the
	following command 
	</p>
	<ul>
		<li/>
<p class="western" align="left" style="margin-bottom: 0in; border: none; padding: 0in; line-height: 115%; orphans: 2; widows: 2">
		zip -r program1 *</p>
		<ul>
			<li/>
<p class="western" align="left" style="margin-bottom: 0in; border: none; padding: 0in; line-height: 115%; orphans: 2; widows: 2">
			This creates an archive of all file and folders in the current
			directory called program1.zip</p>
			<li/>
<p class="western" align="left" style="margin-bottom: 0in; border: none; padding: 0in; line-height: 115%; orphans: 2; widows: 2">
			<font color="#ff0000"><b>Do not zip the folder itself, only the
			files required for the lab</b></font></p>
		</ul>
	</ul>
	<li/>
<p class="western" align="left" style="margin-bottom: 0in; border: none; padding: 0in; line-height: 115%; orphans: 2; widows: 2">
	Upload the archive to Mimir under ‘Program 1’</p>
</ul>
<p class="western" align="left" style="margin-left: 0.5in; margin-bottom: 0in; border: none; padding: 0in; font-weight: normal; line-height: 115%; orphans: 2; widows: 2">
<br/>

</p>
<h1 class="western" align="left" style="border: none; padding: 0in; line-height: 115%; page-break-inside: avoid; orphans: 2; widows: 2; page-break-after: avoid"><a name="h.aqhkjciyw7s9"></a>
<i>Expected Interface and Test Output</i></h1>
<ul>
	<ul>
		<li/>
<h3 class="western" align="left" style="margin-top: 0in; border: none; padding: 0in; line-height: 115%; page-break-inside: avoid; orphans: 2; widows: 2; page-break-after: avoid"><a name="h.hiwn17ohwo3"></a>
		Test Commands</h3>
	</ul>
</ul>
<ul>
	<ul>
		<ul>
			<li/>
<p class="western" align="left" style="margin-bottom: 0in; border: none; padding: 0in; line-height: 115%; orphans: 2; widows: 2">
			The following is an example of the test <font color="#1155cc"><u><a href="https://drive.google.com/file/d/0B5NpY9dM1zfBM25fcGtDQkFOcVk/view?usp=sharing">user</a><a href="https://drive.google.com/file/d/0B5NpY9dM1zfBM25fcGtDQkFOcVk/view?usp=sharing">.</a><a href="https://drive.google.com/file/d/0B5NpY9dM1zfBM25fcGtDQkFOcVk/view?usp=sharing">txt</a></u></font></p>
			<li/>
<p class="western" align="left" style="margin-bottom: 0in; border: none; padding: 0in; line-height: 115%; orphans: 2; widows: 2">
			cat input.txt | ./program1 &gt; output.txt<br/>
diff expected.txt
			output.txt</p>
			<ul>
				<li/>
<p class="western" align="left" style="margin-bottom: 0in; border: none; padding: 0in; line-height: 115%; orphans: 2; widows: 2">
				<i>Expected Test Output (with our test case):</i></p>
				<ul>
					<li/>
<p class="western" align="left" style="margin-bottom: 0in; border: none; padding: 0in; line-height: 115%; orphans: 2; widows: 2">
					Test case: <font color="#1155cc"><u><a href="https://drive.google.com/open?id=0B5NpY9dM1zfBMWtqaDZzVFNWcVU">favorites</a><a href="https://drive.google.com/open?id=0B5NpY9dM1zfBMWtqaDZzVFNWcVU">.</a><a href="https://drive.google.com/open?id=0B5NpY9dM1zfBMWtqaDZzVFNWcVU">txt</a></u></font></p>
					<li/>
<p class="western" align="left" style="margin-bottom: 0in; border: none; padding: 0in; line-height: 115%; orphans: 2; widows: 2">
					<font color="#1155cc"><u><a href="https://drive.google.com/open?id=0B5NpY9dM1zfBV0JDaW85d3lYeU0">output</a><a href="https://drive.google.com/open?id=0B5NpY9dM1zfBV0JDaW85d3lYeU0">.</a><a href="https://drive.google.com/open?id=0B5NpY9dM1zfBV0JDaW85d3lYeU0">txt</a></u></font></p>
				</ul>
				<li/>
<p class="western" align="left" style="margin-bottom: 0in; border: none; padding: 0in; line-height: 115%; orphans: 2; widows: 2">
				<i>Expected Test Output (with our test case):</i></p>
				<ul>
					<li/>
<p class="western" align="left" style="margin-bottom: 0in; border: none; padding: 0in; line-height: 115%; orphans: 2; widows: 2">
					Test case: <font color="#1155cc"><u><a href="https://drive.google.com/open?id=0B5NpY9dM1zfBdWR1bGNOUDhRb3M">invalidcommand</a><a href="https://drive.google.com/open?id=0B5NpY9dM1zfBdWR1bGNOUDhRb3M">.</a><a href="https://drive.google.com/open?id=0B5NpY9dM1zfBdWR1bGNOUDhRb3M">txt</a></u></font></p>
					<li/>
<p class="western" align="left" style="margin-bottom: 0in; border: none; padding: 0in; line-height: 115%; orphans: 2; widows: 2">
					<font color="#1155cc"><u><a href="https://drive.google.com/open?id=0B5NpY9dM1zfBN3FDSEdfb0VIWDg">output</a><a href="https://drive.google.com/open?id=0B5NpY9dM1zfBN3FDSEdfb0VIWDg">.</a><a href="https://drive.google.com/open?id=0B5NpY9dM1zfBN3FDSEdfb0VIWDg">txt</a></u></font></p>
				</ul>
				<li/>
<p class="western" align="left" style="margin-bottom: 0in; border: none; padding: 0in; line-height: 115%; orphans: 2; widows: 2">
				<i>Expected Test Output (with our test case):</i></p>
				<ul>
					<li/>
<p class="western" align="left" style="margin-bottom: 0in; border: none; padding: 0in; line-height: 115%; orphans: 2; widows: 2">
					Test case: <font color="#1155cc"><u><a href="https://drive.google.com/open?id=0B5NpY9dM1zfBbkx5Z2VfY1M3SU0">close</a><a href="https://drive.google.com/open?id=0B5NpY9dM1zfBbkx5Z2VfY1M3SU0">.</a><a href="https://drive.google.com/open?id=0B5NpY9dM1zfBbkx5Z2VfY1M3SU0">txt</a></u></font></p>
					<li/>
<p class="western" align="left" style="margin-bottom: 0in; border: none; padding: 0in; line-height: 115%; orphans: 2; widows: 2">
					<font color="#1155cc"><u><a href="https://drive.google.com/open?id=0B5NpY9dM1zfBNHdqXzJGenQwOEk">output</a><a href="https://drive.google.com/open?id=0B5NpY9dM1zfBNHdqXzJGenQwOEk">.</a><a href="https://drive.google.com/open?id=0B5NpY9dM1zfBNHdqXzJGenQwOEk">txt</a></u></font></p>
				</ul>
				<li/>
<p class="western" align="left" style="margin-bottom: 0in; border: none; padding: 0in; line-height: 115%; orphans: 2; widows: 2">
				<i>Expected Test Output (with our test case):</i></p>
				<ul>
					<li/>
<p class="western" align="left" style="margin-bottom: 0in; border: none; padding: 0in; line-height: 115%; orphans: 2; widows: 2">
					Test case: <font color="#1155cc"><u><a href="https://drive.google.com/open?id=0B5NpY9dM1zfBSDVjcUlPUWpQa00">login</a><a href="https://drive.google.com/open?id=0B5NpY9dM1zfBSDVjcUlPUWpQa00">.</a><a href="https://drive.google.com/open?id=0B5NpY9dM1zfBSDVjcUlPUWpQa00">txt</a></u></font></p>
					<li/>
<p class="western" align="left" style="margin-bottom: 0in; border: none; padding: 0in; line-height: 115%; orphans: 2; widows: 2">
					<font color="#1155cc"><u><a href="https://drive.google.com/open?id=0B5NpY9dM1zfBc0pKR0VnT3FsUGM">output</a><a href="https://drive.google.com/open?id=0B5NpY9dM1zfBc0pKR0VnT3FsUGM">.</a><a href="https://drive.google.com/open?id=0B5NpY9dM1zfBc0pKR0VnT3FsUGM">txt</a></u></font></p>
				</ul>
				<li/>
<p class="western" align="left" style="margin-bottom: 0in; border: none; padding: 0in; line-height: 115%; orphans: 2; widows: 2">
				<i>Expected Test Output (with our test case):</i></p>
				<ul>
					<li/>
<p class="western" align="left" style="margin-bottom: 0in; border: none; padding: 0in; line-height: 115%; orphans: 2; widows: 2">
					Test case: <font color="#1155cc"><u><a href="https://drive.google.com/open?id=0B5NpY9dM1zfBLVFBNVBSbnRGU0k">multiuser</a><a href="https://drive.google.com/open?id=0B5NpY9dM1zfBLVFBNVBSbnRGU0k">.</a><a href="https://drive.google.com/open?id=0B5NpY9dM1zfBLVFBNVBSbnRGU0k">txt</a></u></font></p>
					<li/>
<p class="western" align="left" style="margin-bottom: 0in; border: none; padding: 0in; line-height: 115%; orphans: 2; widows: 2">
					<font color="#1155cc"><u><a href="https://drive.google.com/open?id=0B5NpY9dM1zfBZ09XS1UycEN0Z3M">output</a><a href="https://drive.google.com/open?id=0B5NpY9dM1zfBZ09XS1UycEN0Z3M">.</a><a href="https://drive.google.com/open?id=0B5NpY9dM1zfBZ09XS1UycEN0Z3M">txt</a></u></font></p>
				</ul>
				<li/>
<p class="western" align="left" style="margin-bottom: 0in; border: none; padding: 0in; line-height: 115%; orphans: 2; widows: 2">
				<i>Expected Test Output (with our test case):</i></p>
				<ul>
					<li/>
<p class="western" align="left" style="margin-bottom: 0in; border: none; padding: 0in; line-height: 115%; orphans: 2; widows: 2">
					Test case: <font color="#1155cc"><u><a href="https://drive.google.com/open?id=0B5NpY9dM1zfBRHRZR0lkVmFNRFk">passwordchange</a><a href="https://drive.google.com/open?id=0B5NpY9dM1zfBRHRZR0lkVmFNRFk">.</a><a href="https://drive.google.com/open?id=0B5NpY9dM1zfBRHRZR0lkVmFNRFk">txt</a></u></font></p>
					<li/>
<p class="western" align="left" style="margin-bottom: 0in; border: none; padding: 0in; line-height: 115%; orphans: 2; widows: 2">
					<font color="#1155cc"><u><a href="https://drive.google.com/open?id=0B5NpY9dM1zfBWEMtUldjV0lnNTQ">output</a><a href="https://drive.google.com/open?id=0B5NpY9dM1zfBWEMtUldjV0lnNTQ">.</a><a href="https://drive.google.com/open?id=0B5NpY9dM1zfBWEMtUldjV0lnNTQ">txt</a></u></font></p>
				</ul>
				<li/>
<p class="western" align="left" style="margin-bottom: 0in; border: none; padding: 0in; line-height: 115%; orphans: 2; widows: 2">
				<i>Expected Test Output (with our test case):</i></p>
				<ul>
					<li/>
<p class="western" align="left" style="margin-bottom: 0in; border: none; padding: 0in; line-height: 115%; orphans: 2; widows: 2">
					Test case: <font color="#1155cc"><u><a href="https://drive.google.com/open?id=0B5NpY9dM1zfBcXR5YVhLc2w1Vk0">userloggedin</a><a href="https://drive.google.com/open?id=0B5NpY9dM1zfBcXR5YVhLc2w1Vk0">.</a><a href="https://drive.google.com/open?id=0B5NpY9dM1zfBcXR5YVhLc2w1Vk0">txt</a></u></font></p>
					<li/>
<p class="western" align="left" style="margin-bottom: 0in; border: none; padding: 0in; line-height: 115%; orphans: 2; widows: 2">
					<font color="#1155cc"><u><a href="https://drive.google.com/open?id=0B5NpY9dM1zfBbWZHcDVlR1hGSzg">output</a><a href="https://drive.google.com/open?id=0B5NpY9dM1zfBbWZHcDVlR1hGSzg">.</a><a href="https://drive.google.com/open?id=0B5NpY9dM1zfBbWZHcDVlR1hGSzg">txt</a></u></font></p>
				</ul>
			</ul>
		</ul>
	</ul>
</ul>
<h1 class="western" align="left" style="border: none; padding: 0in; line-height: 115%; page-break-inside: avoid; orphans: 2; widows: 2; page-break-after: avoid"><a name="h.yht8dwbyq9tz"></a>
<i>Grading Guidelines</i></h1>
<ul>
	<li/>
<h2 class="western" align="left" style="margin-top: 0in; border: none; padding: 0in; line-height: 115%; page-break-inside: avoid; orphans: 2; widows: 2; page-break-after: avoid"><a name="h.w6b2n857d447"></a>
	Part A</h2>
	<ul>
		<li/>
<p class="western" align="left" style="margin-bottom: 0in; border: none; padding: 0in; line-height: 115%; orphans: 2; widows: 2">
		Linked List contains an internal iterator (2 points)</p>
		<li/>
<p class="western" align="left" style="margin-bottom: 0in; border: none; padding: 0in; line-height: 115%; orphans: 2; widows: 2">
		Linked List does not return a pointer to a node (3 points)</p>
		<li/>
<p class="western" align="left" style="margin-bottom: 0in; border: none; padding: 0in; line-height: 115%; orphans: 2; widows: 2">
		The &lt;&lt; and ++ operators are overloaded (2 points)</p>
	</ul>
	<li/>
<h2 class="western" align="left" style="margin-top: 0in; border: none; padding: 0in; line-height: 115%; page-break-inside: avoid; orphans: 2; widows: 2; page-break-after: avoid"><a name="h.fz1xsc2uiynt"></a>
	Part B</h2>
	<ul>
		<li/>
<p class="western" align="left" style="margin-bottom: 0in; border: none; padding: 0in; line-height: 115%; orphans: 2; widows: 2">
		Linked List must be templated to work with any type(4 points)</p>
		<li/>
<p class="western" align="left" style="margin-bottom: 0in; border: none; padding: 0in; line-height: 115%; orphans: 2; widows: 2">
		<font color="#ff0000">Destructor writes out a list of user’s info
		for the MovieChart Class (2 points)</font></p>
	</ul>
	<li/>
<h2 class="western" align="left" style="margin-top: 0in; border: none; padding: 0in; line-height: 115%; page-break-inside: avoid; orphans: 2; widows: 2; page-break-after: avoid"><a name="h.h3hmb9acplds"></a>
	Part C:</h2>
	<ul>
		<li/>
<h2 class="western" align="left" style="margin-top: 0in; border: none; padding: 0in; line-height: 115%; page-break-inside: avoid; orphans: 2; widows: 2; page-break-after: avoid"><a name="h.rkjv30fgzd5s"></a>
		<font face="Arial, serif"><font size="2" style="font-size: 11pt"><span style="font-weight: normal">Passes
		all tests (each worth 3 points)</span></font></font></h2>
	</ul>
	<li/>
<h2 class="western" align="left" style="margin-top: 0in; border: none; padding: 0in; line-height: 115%; page-break-inside: avoid; orphans: 2; widows: 2; page-break-after: avoid"><a name="h.lgnwrx7mygze"></a>
	Part D:</h2>
	<ul>
		<li/>
<p class="western" align="left" style="margin-bottom: 0in; border: none; padding: 0in; line-height: 115%; orphans: 2; widows: 2">
		Follows formatting guidelines, requested project structure and
		naming conventions, contains written <a href="https://docs.google.com/document/d/1kamsSBw1XoRB7Qhw2Mx4HOpSFFJ9yx7pfQejqM4ljoE/edit?usp=sharing"><font color="#1155cc"><u>Readme</u></font></a>,
		and submission does not include .o files or binary (1 point)</p>
	</ul>
</ul>
<h1 class="western" align="left" style="margin-top: 0.28in; margin-bottom: 0.08in; border: none; padding: 0in; line-height: 115%; page-break-inside: avoid; orphans: 2; widows: 2; page-break-after: avoid"><a name="h.lfvx8meroej"></a>
<font face="Arial, serif"><font size="5" style="font-size: 20pt">Formatting
Guidelines</font></font></h1>
<ul>
	<li/>
<p class="western" align="left" style="margin-bottom: 0in; border: none; padding: 0in; line-height: 115%; orphans: 2; widows: 2">
	Stores all values in a named variable. 
	</p>
	<ul>
		<li/>
<p class="western" align="left" style="margin-bottom: 0in; border: none; padding: 0in; line-height: 115%; orphans: 2; widows: 2">
		No Magic Numbers.</p>
	</ul>
	<li/>
<p class="western" align="left" style="margin-bottom: 0in; border: none; padding: 0in; line-height: 115%; orphans: 2; widows: 2">
	Uses indentation to identify code blocks. 
	</p>
	<ul>
		<li/>
<p class="western" align="left" style="margin-bottom: 0in; border: none; padding: 0in; line-height: 115%; orphans: 2; widows: 2">
		Every Code block should be indented from it’s parent block to
		identify scope.</p>
	</ul>
	<li/>
<p class="western" align="left" style="margin-bottom: 0in; border: none; padding: 0in; line-height: 115%; orphans: 2; widows: 2">
	No single letter or non-descriptive variable names</p>
	<ul>
		<li/>
<p class="western" align="left" style="margin-bottom: 0in; border: none; padding: 0in; line-height: 115%; orphans: 2; widows: 2">
		The only exception to this rule is ‘i’ in a for loop</p>
	</ul>
	<li/>
<p class="western" align="left" style="margin-bottom: 0in; border: none; padding: 0in; line-height: 115%; orphans: 2; widows: 2">
	Separates code blocks and logical sections with whitespace</p>
	<ul>
		<li/>
<p class="western" align="left" style="margin-bottom: 0in; border: none; padding: 0in; line-height: 115%; orphans: 2; widows: 2">
		Optimize your code for the reader, not the writer</p>
	</ul>
	<li/>
<p class="western" align="left" style="margin-bottom: 0in; border: none; padding: 0in; line-height: 115%; orphans: 2; widows: 2">
	Output is formatted with an explanation of the output values</p>
	<ul>
		<li/>
<p class="western" align="left" style="margin-bottom: 0in; border: none; padding: 0in; line-height: 115%; orphans: 2; widows: 2">
		Format your output so that someone who does not know what the
		program is supposed to do would know what the output meant</p>
	</ul>
	<li/>
<p class="western" align="left" style="margin-bottom: 0in; border: none; padding: 0in; line-height: 115%; orphans: 2; widows: 2">
	Each method is preceded by a comment explaining what the method does</p>
	<li/>
<p class="western" align="left" style="margin-bottom: 0in; border: none; padding: 0in; line-height: 115%; orphans: 2; widows: 2">
	Each significant code block is preceded by a comment explaining what
	the code block does.</p>
	<ul>
		<li/>
<p class="western" align="left" style="margin-bottom: 0in; border: none; padding: 0in; line-height: 115%; orphans: 2; widows: 2">
		A significant code block is more than 3 lines performing a single
		logical operation</p>
	</ul>
	<li/>
<p class="western" align="left" style="margin-bottom: 0in; border: none; padding: 0in; line-height: 115%; orphans: 2; widows: 2">
	CONSTANTS are in all caps</p>
	<li/>
<p class="western" align="left" style="margin-bottom: 0in; border: none; padding: 0in; line-height: 115%; orphans: 2; widows: 2">
	Only data types start with a capital letter</p>
	<ul>
		<li/>
<p class="western" align="left" style="margin-bottom: 0in; border: none; padding: 0in; line-height: 115%; orphans: 2; widows: 2">
		Classes, Enums, Structs, etc.</p>
	</ul>
	<li/>
<p class="western" align="left" style="margin-bottom: 0in; border: none; padding: 0in; line-height: 115%; orphans: 2; widows: 2">
	Do not use the ‘using namespace’ declaration in a header (.h)
	file</p>
	<li/>
<p class="western" align="left" style="margin-bottom: 0in; border: none; padding: 0in; line-height: 115%; orphans: 2; widows: 2">
	In general we will follow the Google C++ style guidelines. If you
	want more info, you can view them here:
	<font color="#1155cc"><u><a href="https://google.github.io/styleguide/cppguide.html">https</a><a href="https://google.github.io/styleguide/cppguide.html">://</a><a href="https://google.github.io/styleguide/cppguide.html">google</a><a href="https://google.github.io/styleguide/cppguide.html">.</a><a href="https://google.github.io/styleguide/cppguide.html">github</a><a href="https://google.github.io/styleguide/cppguide.html">.</a><a href="https://google.github.io/styleguide/cppguide.html">io</a><a href="https://google.github.io/styleguide/cppguide.html">/</a><a href="https://google.github.io/styleguide/cppguide.html">styleguide</a><a href="https://google.github.io/styleguide/cppguide.html">/</a><a href="https://google.github.io/styleguide/cppguide.html">cppguide</a><a href="https://google.github.io/styleguide/cppguide.html">.</a><a href="https://google.github.io/styleguide/cppguide.html">html</a></u></font></p>
</ul>
<p class="western" align="left" style="margin-bottom: 0in; border: none; padding: 0in; line-height: 115%; orphans: 2; widows: 2">
<br/>

</p>
</body>
</html>