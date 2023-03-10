#include <iostream>
#include <string>
#include <algorithm>


int main()
{
	std::string bluRayTVShows[]
	{
		{"Soul Eater - Complete Series"},
		{"Seraph of the End - Season 1"},
		{"Kids on the Slope - Complete Series"},
		{"Breaking Bad - Season 1"},
		{"Breaking Bad - Season 2"},
	};

	std::string bluRayMovies[]
	{
		"Nausicaa",
		"Anastasia",
		"Weathering With You",
		"The Wind Rises",
		"Star Wars, The Phantom Menace",
		"Star Wars, Attack of the Clones",
		"Star Wars, Revenge of the Sith",
		"Star Wars, A New Hope",
		"Star Wars, The Empire Stikes Back",
		"Star Wars, Return of the Jedi",
		"Star Wars, The Force Awakens",
		"Django Unchained",
		"Kingsman the Secret Service",
		"The incredibles",
		"Spirited Away",
		"Princess Mononoke",
		"The Tale of the Princess Kaguya",
		"Your Name",
		"Wolf Children",
		"Tales from EarthSea",
		"Bayonetta Bloodfate",
		"Inside Out",
		"Cinderella",
		"Peter Pan",
		"Snow White and the Seven Dwarfs",
		"Kronk's New Groove",
		"The Rescuers",
		"Aladdin",
		"Sleeping Beauty",
		"Lilo & Stitch",
		"Lilo & Stitch: Stitch Has A Glitch",
		"Beauty and the Beast",
		"The Fox and the Hound",
		"The Fox and the Hound",
		"Mary and the Witch's Flower",
		"Detective Pikachu",
		"Teenage Mutant Ninja Turtles",
		"Captain America: The First Avenger",
		"Guardians of the Galaxy",
		"The Green Hornet ",
		"Spider-Man 3",
		"Zombieland",
		"Isle of Dogs",
		"Spider-Man: Homecoming",
		"How to Train Your Dragon",
		"How to Train Your Dragon 2",
		"The Twilight Saga: New Moon",
		"The Twilight Saga: Eclipse",
		"The Twilight Saga: Breaking Dawn – Part 1",
		"The Secret Garden (2020)",
		"My Hero Academia: Heroes Rising",
		"The Mitchells vs. the Machines",
		"Batman Begins",
		"The Dark Knight",
		"The Dark Knight Rises",
		"A Silent Voice",
		"The Garden of Words",
		"Spider-Man: Into the Spider-Verse",
		"Warm Bodies",
		"The Book of Life",
		"The Great Gatsby",
		"Mamma Mia!",
		"Mamma Mia! Here We Go Again",
		"Dark Shadows",
		"Saw 1-7",
		"Miss Peregrine's Home for Peculiar Children",
		"Spirit",
		"Kubo",
		"Les Misérables",
		"Easy A",
		"The Help",
		"Bad Teacher",
		"Thor: Ragnarok",
		"The Twilight Saga: Breaking Dawn: Part 2",
		"Reservoir Dogs",
		"The Mummy Trilogy",
		"Blade Runner the Final Cut (1982)",
		"X-Men",
		"X2",
		"Harry Potter and the Goblet of Fire",
		"Harry Potter and the Half-Blood Prince",
		"Brave",
		"300",
		"Furious 7",
		"Avengers: Endgame",
		"Fast & Furious 6",
		"Shazam!",
		"Harry Potter and the Deathly Hallows: Part 2",
		"The Avengers",
		"Saban's Power Rangers",
		"The Little Mermaid",
	};

	int numMovies{(sizeof(bluRayMovies) / sizeof(bluRayMovies[0]))};

	for (int i{ 0 }; i < numMovies - 1; ++i)
	{
		for (int j{ i + 1 }; j < numMovies - 1; ++j)
		{
			if (bluRayMovies[i] > bluRayMovies[j])
			{
				std::swap(bluRayMovies[i], bluRayMovies[j]);
			}
		}
	}

	int movieCount{0};
	
	for (int a{ 0 }; a < numMovies; ++a)
	{
		std::cout << bluRayMovies[a] << '\n';
		++movieCount;
	}

	std::cout << '\n';

	std::cout << "Number of movies: " << movieCount << '\n';

	return 0;
}
