-- name & id column exists in both tables => Must use dot notation <table.column>

-- FROM <table 1> JOIN <table 2> ON <primary key> = <foreign key>

-- Joining tables optimized by SQL engines more than nesting queries

SELECT songs.name FROM songs JOIN artists
    ON artist_id = artists.id
    WHERE artists.name = 'Post Malone';