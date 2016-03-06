openr,un,'/tmp/test.dat',/get_lun
  
n=2l
i=0l
data=replicate({phim:0d,n:0d},n)

xphim=0d & xn=0d

while not(eof(un)) do begin
   readu,un,xphim,xn
   if i eq n then begin
      data=[data,data]
      n*=2
   endif
   data[i].phim=xphim
   data[i].n=xn
   
   i++                          ;
endwhile

data=data[0:i-1]

free_lun,un

end
