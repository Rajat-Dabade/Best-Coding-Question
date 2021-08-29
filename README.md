# Problem Statement
>You have a function that generate a number between 0 to 1 randomly which is uniformly distributed. Now calculate the number pi.

# Solution Explaination

So the basic idea is to randomly draw a point in a 1 to 1 square, since you can call the ```random.uniform(0, 1)``` function twice *(Done in the Python/CalculatePi.py on line number : 9 and 10)*, it will generate 2 number between 0 to 1. Let's use them one from the x axis and one for y axis. 

Let take an example of **x = 0.2** and **y = 0.6**, then we are gonna get somewhere the point like here.

![imge1](https://github.com/Rajat-Dabade/Best-Coding-Question/blob/master/RepoEssentials/img1.png)

>So, let me randomly draw some more point then it will be look like

![imge2](https://github.com/Rajat-Dabade/Best-Coding-Question/blob/master/RepoEssentials/img2.png)

>Now let me draw a sqaure through it.

![imge3](https://github.com/Rajat-Dabade/Best-Coding-Question/blob/master/RepoEssentials/img3.png)