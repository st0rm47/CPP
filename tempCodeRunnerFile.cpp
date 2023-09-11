for (int x : set1) {
        if (set2.find(x) != set2.end()) {
            intersectionSet.insert(x);
        }
    }