# Problem Statement
>**You have a function that generates a number between 0 to 1 randomly which is uniformly distributed. Now calculate the number pi.**

# Solution Explanation

So the basic idea is to randomly draw a point in a 1 to 1 square since you can call the ```random.uniform(0, 1)``` function twice it will generate 2 numbers between 0 to 1. Let's use one from the x-axis and one for the y-axis. 

Lets take an example if the 2 randomly generated numbers are  **x = 0.2** and **y = 0.6**, then we are going to get point somewhere like this.

![imge1](./RepoEssentials/img1.png)


So, let me randomly draw some more points then it will look like

![imge2](./RepoEssentials/img2.png)

**The tricky part and the Hint:** The only way to find the value of pi is with the help of circle and square and their area's. So let me draw a circle and square through it. 

![imge3](./RepoEssentials/img4.png)

As you can see now, the goal here is to calculate all the points inside the circle and calculate all the points inside the square.

>**Points inside the circle**

![img5](./RepoEssentials/img6.png)

>**Points inside the square**

![img6](./RepoEssentials/img7.png)

The ratio between the number of points inside the circle and the number of points inside the square will be pretty closed to the ratio between the total area of a circle and the total area of this square.

>**The total area of the circle**

![img7](./RepoEssentials/img8.png)

>**The total area of the square**

![img8](./RepoEssentials/img9.png)

>**Equalling the ratios will be like:**

![img9](./RepoEssentials/img16.png)

So, how do you know that the point lies inside the circle? Well, it is pretty simple, you just take the distance between any random point to the **origin** and if it is smaller than or equal to 1 then the point will lie inside the circle.

>**For Example let takes this one**

![img10](./RepoEssentials/img10.png)

So the distance will be 
```
squareRoot = sqrt(x^2 + y^2)
```

if ```squareRoot``` is smaller than one then the point lies inside the circle and if it is larger than one then the point lies outside the circle but still will be inside the square.

>Now the basic algebra will work

![img11](./RepoEssentials/img17.jpg)
```
As the radius is 1
```
![img12](./RepoEssentials/img20.jpg)
![img13](./RepoEssentials/img18.jpg)

I got the more accurate value of pi for n = 100000000. As it uses the ```random.uniform(0, 1)``` method, the answer you get will be different.

```
n = 100000000
pi = 3.1415
```
![img14](./RepoEssentials/img15.png)


>**Guide to contribute is in Contribute file. Here is the link
[contribute](./Contribute.md)**