/*CREATE OR REPLACE FUNCTION delete_row(integer , integer) --table name,one_d index,one_d index value 
RETURNS void AS 
$$
 DELETE  FROM array_ WHERE one_d[$1]=$2;

$$
LANGUAGE SQL;
*/
CREATE OR REPLACE FUNCTION delete_row(x integer ,y integer) --table name,one_d index,one_d index value 
RETURNS void AS 
$$
 DELETE  FROM array_ WHERE one_d[x]=y;

$$
LANGUAGE SQL;
