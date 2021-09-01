# function definition to calculate pi value
def estimate_pi(n) 
  num_point_circle = 0
  num_point_total = 0
  
  n.times do
      x = rand(0.0 .. 1.0)
      y = rand(0.0 .. 1.0)
      distance = x*x + y*y

      if distance <= 1
          num_point_circle += 1
      end
      num_point_total += 1
  end
  4.0 * num_point_circle / num_point_total
end

# function call
pi = estimate_pi(100000000)

#printing the output
puts pi
