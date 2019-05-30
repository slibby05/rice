f y = 
   let x = 2 + 
         let x' = 3 + y
             z' = x' - 3
         in z'
       z = x -2
   in z
 
main = f 5
