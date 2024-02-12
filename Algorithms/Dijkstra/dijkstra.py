from collections import defaultdict

# Define the graph as an adjacency list
graph = {
    0: {1: 9, 4: 7, 3: 3},
    1: {0: 9, 4: 8, 5: 11, 7: 6, 3: 17, 2: 2},
    2: {1: 2, 7: 3, 6: 11, 5: 19},
    3: {0: 3, 1: 17, 4: 5},
    4: {0: 7, 1: 8, 6: 5, 5: 12},
    5: {1: 11, 4: 12, 7: 13, 6: 6},
    6: {2: 11, 4: 5, 5: 6, 7: 8},
    7: {1: 6, 2: 3, 5: 13, 6: 8}
}

# Initialize distances and visited nodes
distances = defaultdict(lambda: float('inf'))
distances[0] = 0  # Starting node has distance 0 to itself
visited = set()

# Print table header
print("Iteration\tCurrent Vertex\tDistance from Source")
print("------------------------------------------------")

# Main loop
iteration = 1
while visited != set(distances):
    # Find the unvisited node with the smallest distance
    min_node = min(set(distances) - visited, key=distances.get)

    # Print current iteration and current vertex
    print(f"Iteration {iteration}\t{min_node}\t\t", end="")

    # Print distances from source
    for node, distance in sorted(distances.items()):
        print(f"{distance}\t", end="")

    # Iterate through neighbors of the current node
    for neighbor, weight in graph[min_node].items():
        # Update distance if shorter path found
        new_distance = distances[min_node] + weight
        if new_distance < distances[neighbor]:
            distances[neighbor] = new_distance

    # Mark the current node as visited
    visited.add(min_node)
    print()

    iteration += 1

# Print final distances
print("\nFinal distances:")
for node, distance in sorted(distances.items()):
    print(f"Node {node}: {distance}")
