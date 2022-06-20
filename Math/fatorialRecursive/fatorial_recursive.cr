def fatorial(fatorialInstance)
  if fatorialInstance==0 || fatorialInstance==1
    1
  else
  fatorialInstance*fatorial(fatorialInstance-1)
end
end

puts fatorial(5)
