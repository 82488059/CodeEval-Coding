j = 0
k = 0
s = {}
for i=1000, 1, -1 do
	f = true
	for k = 2, i/2, 1 do
		if (0 == i%k) then
			f = false
			break
		end
	end
	if (f) then 
		f = false
		s = tostring(i)
		l = string.len(s)
		for k = 1, l do 
			if (string.byte(s, k) ~= string.byte(s, l-k+1)) then 
				
				break
			end
			if (k == l )then
				f = true
				print (i)
			end
		end
		if (f) then
			break
		end
	end
	
            
end