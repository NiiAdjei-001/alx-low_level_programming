<!DOCTYPE html>
<html>

<body>
	<h1>0x01. C - Variables, if, else, while</h1>
	<hr>
	
	<h2>Tasks - <code>mandatory</code></h2>

	<h3>0. Positive anything is better than negative nothing</h3>
	<p> 
		This program will assign a random number to the variable <code>n</code> each time it is executed. Complete the source code in order to print whether the number stored in the variable <code>n</code> is positive or negative.
	</p>
	<ul>
		<li>You can find the source code <a href="https://intranet.alxswe.com/rltoken/rrqNDWjrCWdARnWFLPExPw">here</a></li>
		<li>The variable <code>n</code> will store a different value every time you will run this program</li>
		<li>You don’t have to understand what <code>rand</code>, <code>srand</code>, <code>RAND_MAX</code> do. Please do not touch this code</li>
		<li>The output of the program should be:
			<ul>
				<li>The number, followed by
				<ul>
					<li>if the number is greater than 0: <code>is positive</code></li>
					<li>if the number <code>is 0: is zero</code></li>
					<li>if the number is less than 0: <code>is negative</code></li>
				</ul>
				</li>
				<li>followed by a new line</li>
			</ul>
		</li>
	</ul>

	<h3>1. The last digit</h3>
	<p>This program will assign a random number to the variable <code>n</code> each time it is executed. Complete the source code in order to print the last digit of the number stored in the variable <code>n</code>.
	</p>
	<ul>
		<li>You can find the source code <a href="https://intranet.alxswe.com/rltoken/5HWhPDsq3jq1yCRQFrLl4Q">here</a></li>
		<li>The variable <code>n</code> will store a different value every time you run this program</li>
		<li>You don’t have to understand what <code>rand</code>, <code>srand</code>, <code>RAND_MAX</code> do. Please do not touch this code</li>
		<li>The output of the program should be:
			<ul>
				<li>The string <code>Last digit of</code>, followed by</li>
				<li><code>n</code>, followed by</li>
				<li>the string <code>is</code>, followed by
					<ul>
						<li>if the last digit of <code>n</code> is greater than 5: the string <code>and is greater than 5</code></li>
						<li>if the last digit of <code>n</code> is 0: the string <code>and is 0</code></li>
						<li>if the last digit of <code>n</code> is less than 6 and not 0: the string <code>and is less than 6 and not 0</code></li>
					</ul>
				</li>
				<li>followed by a new line</li>
			</ul>
		</li>
	</ul>

	<h3>2. I sometimes suffer from insomnia. And when I can't fall asleep, I play what I call the alphabet game</h3>
	<p>
		Write a program that prints the alphabet in lowercase, followed by a new line.
	</p>
	<ul>
		<li>You can only use the <code>putchar</code> function (every other function (<code>printf</code>, <code>puts</code>, etc…) is forbidden)</li>
		<li>All your code should be in the <code>main</code> function</li>
		<li>You can only use <code>putchar</code> twice in your code</li>
	</ul>

	<h3>3. alphABET</h3>
	<p>Write a program that prints the alphabet in lowercase, and then in uppercase, followed by a new line.
	</p>
	<ul>
		<li>You can only use the <code>putchar</code> function (every other function (<code>printf</code>, <code>puts</code>, etc…) is forbidden)</li>
		<li>All your code should be in the <code>main</code> function</li>
		<li>You can only use <code>putchar</code> three times in your code</li>
	</ul>

	<h3>4. When I was having that alphabet soup, I never thought that it would pay off</h3>
	<p>Write a program that prints the alphabet in lowercase, followed by a new line.</p>
	<ul>
		<li>Print all the letters except <code>q</code> and <code>e</code></li>
		<li>You can only use the <code>putchar</code> function (every other function (<code>printf</code>, <code>puts</code>, etc…) is forbidden)</li>
		<li>All your code should be in the <code>main</code> function</li>
		<li>You can only use <code>putchar</code> twice in your code</li>
	</ul>

	<h3>5. Numbers</h3>
	<p>Write a program that prints all single digit numbers of base 10 starting from <code>0</code>, followed by a new line.</p>
	<ul>
		<li>All your code should be in the <code>main</code> function</li>
	</ul>

	<h3>6. Numberz</h3>
	<p>Write a program that prints all single digit numbers of base 10 starting from <code>0</code>, followed by a new line.</p>
	<ul>
		<li>You are not allowed to use any variable of type <code>char</code></li>
		<li>You can only use the <code>putchar</code> function (every other function (<code>printf</code>, <code>puts</code>, etc…) is forbidden)</li>
		<li>All your code should be in the <code>main</code> function</li>
		<li>You can only use <code>putchar</code> twice in your code</li>
	</ul>

	<h3>7. Smile in the mirror</h3>
	<p>Write a program that prints the lowercase alphabet in reverse, followed by a new line.</p>
	<ul>
		<li>You can only use the <code>putchar</code> function (every other function (<code>printf</code>, <code>puts</code>, etc…) is forbidden)</li>
		<li>All your code should be in the <code>main</code> function</li>
		<li>You can only use <code>putchar</code> twice in your code</li>
	</ul>

	<h3>8. Hexadecimal</h3>
	<p>Write a program that prints all the numbers of base 16 in lowercase, followed by a new line.</p>
	<ul>
		<li>You can only use the <code>putchar</code> function (every other function (<code>printf</code>, <code>puts</code>, etc…) is forbidden)</li>
		<li>All your code should be in the <code>main</code> function</li>
		<li>You can only use <code>putchar</code> thrice in your code</li>
	</ul>

	<h3>9. Patience, persistence and perspiration make an unbeatable combination for success</h3>
	<p>Write a program that prints all possible combinations of single-digit numbers.</p>
	<ul>
		<li>Numbers must be separated by <code>,</code>, followed by a space</li>
		<li>Numbers should be printed in ascending order</li>
		<li>You can only use the <code>putchar</code> function (every other function (<code>printf</code>, <code>puts</code>, etc…) is forbidden)</li>
		<li>All your code should be in the <code>main</code> function</li>
		<li>You can only use <code>putchar</code> four times maximum in your code</li>
		<li>You are not allowed to use any variable of type <code>char</code></li>
	</ul>


<h2>Tasks - <code>advanced</code></h2>


	<h3>header</h3>
	<p>Content</p>

</body>

</html>

