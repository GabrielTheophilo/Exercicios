controle=0
valorprimo = 0
Num = 13
i = 2
while i<Num
  if(Num%i==0)
    valorprimo += 1
    i+=1
  else
  	i+=1
end
end
if valorprimo>=1
	puts "Not prime"
else
	puts "Prime"
end
