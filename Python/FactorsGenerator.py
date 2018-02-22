def factors(n):             
  for k in range(1,n+1): ##set range to plus 1 as range takes in final parameter minus 1
    if n % k == 0:       ##if a factor of n
      yield k   
      
fc = factors(12)         

counter = 0
ten_factors = []  ##store factors in a list
while counter < 10:   ##count only 10 variables
    try:
        factor = next(fc)
    except StopIteration:   ##prevent stop iterations if value is less than 10
        counter = 10
    else:
        ten_factors.append(factor)
        counter += 1
        
print (ten_factors)
