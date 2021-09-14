#!/home/mike/julia-1.6.2/bin/julia
	const n = 100000000000000
	c = []
	y = 0
	x = 1
	while ((x+1)*(x+1)*x*x) <= n
		global y = x
		while ((x+1)*(y+1)*x*y) <= n
			push!(c, ((x+1)*x*(y+1)*y))
			global y += 1
		end
		global x += 1
	end
	sort!(c)
	result = 1
	for i in eachindex(c)
		if (isassigned(c,i+1))
			if(c[i] != c[i+1])
				global result += 1
			end
		end
	end
	println("N:",n,"  Result:",result)
