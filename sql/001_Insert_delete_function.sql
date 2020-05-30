CREATE OR REPLACE FUNCTION insert_row(text,integer[] , text[][]) 
RETURNS void AS 
$$
--DELETE  FROM array_ WHERE one_d[$1]=$2;
INSERT INTO array_ values($1,$2,$3);
$$
LANGUAGE SQL

