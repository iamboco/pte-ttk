Program kitt;
uses crt;
var a: integer; b: byte;
begin
     a:=1;
     repeat begin
            port[888]:=a;
            delay(100);
            if((a<=128) AND (b=0)) then begin
                        a:=a*2;
                        if(a=128) then b:=1;
            end
            else begin
                 a:=trunc(a/2);
                 if(a=1) then b:=0;
            end;
     end until keypressed;
     delay(3);
     port[888]:=0;
end.