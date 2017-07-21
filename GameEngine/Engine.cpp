#include "stdafx.h"
#include "Engine.h"

Engine::Engine()
{
	// Get the screen resolution and create an SFML window and View
	Vector2f resolution;
	resolution.x = VideoMode::getDesktopMode().width;
	resolution.y = VideoMode::getDesktopMode().height;

	m_Window.create(VideoMode(resolution.x / 2, resolution.y / 2),
		"Game Engine",
		Style::Default);

	// Enable VSync
	m_Window.setVerticalSyncEnabled(true);

	// Create a view for that window with pos, and size
	sf::View view(sf::Vector2f(0, 0), sf::Vector2f(m_Window.getSize().x, m_Window.getSize().y));
	m_Window.setView(view);

	// Load the background into the texture
	// Be sure to scale this image to your screen size
	m_BackgroundTexture.loadFromFile("textures/background.jpg");

	// Associate the sprite with the texture
	m_BackgroundSprite.setTexture(m_BackgroundTexture);
}

void Engine::setName(std::string name) {
	// Set the Game Engine Name
	m_Name = name;
	m_Window.setTitle(m_Name);
}

void Engine::start()
{
	// Timing
	Clock clock;

	std::cout << "Starting " << m_Name << " Engine..." << std::endl;

	createObjects();

	while (m_Window.isOpen())
	{
		// Restart the clock and save the elapsed time into dt (deltaTime)
		Time dt = clock.restart();

		// Make a fraction from the delta time
		float dtAsSeconds = dt.asSeconds();

		// check all the window's events that were triggered since the last iteration of the loop
		sf::Event event;
		while (m_Window.pollEvent(event))
		{
			// "close requested" event: we close the window
			if (event.type == sf::Event::Closed)
				m_Window.close();
		}

		// Engine Functions
		input();
		update(dtAsSeconds);
		draw();
	}

	std::cout << "Closing." << std::endl;
}

void Engine::createObjects() {

	GameObject* random = new GameObject("Random", "textures/random.png");
	m_GameObjects.push_back(random);


	for each (GameObject* obj in m_GameObjects)
	{
		obj->start();
	}
}