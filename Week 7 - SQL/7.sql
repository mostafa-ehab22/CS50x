-- Average energy of songs by Drake
SELECT AVG(energy) AS Average_Energy_Drake
    FROM songs JOIN artists ON artist_id = artists.id
    WHERE artists.name = 'Drake';