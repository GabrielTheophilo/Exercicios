def fat(n)
  if n==0 || n==1
    1
  else
  n*fat(n-1)
end
end

puts fat(5)