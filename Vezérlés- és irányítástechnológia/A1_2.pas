Program Ido;
uses crt,dos;
var
   ora, perc, mp, szmp : word;
   a: integer;
   x: byte;
begin

     port[888]:=0; port[890]:=11;

     x:=0;
     repeat begin
            writeln(mp);

            gettime(ora, perc, mp, szmp);
            a:=trunc(exp(trunc(mp/5)*ln(2))); {1, 2, 4, 8, 16...}

            if(a<256) then begin
                      if(x<>a) then begin
                            if(a=1) then port[890]:=11;
                            port[888]:=0;
                            port[888]:=trunc(a);
                      end;
            end else begin
                if(x<>a) then begin
                       if(a=256) then begin port[888]:=0; port[890]:=10; end
                       else if(a=512) then port[890]:=9
                       else if(a=1024) then port[890]:=15
                       else if(a=2048) then port[890]:=3;

                       end;
            end;

            x:=a;
     end until keypressed;

     port[888]:=0;
     port[890]:=11;
end.
