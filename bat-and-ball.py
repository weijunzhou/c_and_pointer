# BAT AND BALL

# By antiloquax -28th April 2012

import pygame
from pygame.locals import *
pygame.init()

# set the width and height of the screen 
size = [400,400]
screen = pygame.display.set_mode(size)

# give the window a title
pygame.display.set_caption("Bat and Ball")

# This makes the normal mouse pointer invisible in graphics window
pygame.mouse.set_visible(0)

# create surfaces for the host and ball
bat_surf = pygame.Surface((64,12))
bat_surf.fill((0,255,0))
batrect = bat_surf.get_rect()
ball_surf = pygame.Surface((30,30))
ballrect = ball_surf.get_rect()

ball = pygame.draw.circle(ball_surf, (0,0,255), [15,15],15)

# set speed of ball
speed = [3,3]

# puts the bat centre of screen, near the bottom
batrect.center = ((size[0]/2), (size[1]-50))

# make a text object
font = pygame.font.Font(None, 36)
text = font.render("Game Over", True, (255,0,0))
textRect = text.get_rect()
textRect.centerx = (size[0]/2)
textRect.centery = (size[1]/2)

# loop until the user clicks the close button
done = 0

# click a timer to control how often the screen updates
clock = pygame.time.Clock()

# main game loop
while done == 0:
	
	screen.fill((0,0,0))

	# event handling
	for event in pygame.event.get():# if we click something...
		if event.type == pygame.QUIT:# if we click close...
			done = 1 # this will cause the loop to finish
	
	# moves the bat in accordance with the mouse position
	position = pygame.mouse.get_pos()
	batRect.centerx = position[0]

	# moves the ball
	ballrect.left += speed[0]
	ballrect.top += speed[1]
