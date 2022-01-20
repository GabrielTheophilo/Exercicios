$i = 0
$num = 100
while $i<$num do
  if($i%3==0&&$i%5==0)
    puts "fizzbuzz"
    $i+=1
  elsif($i%3==0)
    puts "fizz"
    $i+=1
  elsif($i%5==0)
    puts "buzz"
    $i+=1
  else
    $i+=1
  end
end
