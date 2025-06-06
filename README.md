### Blobby Volley Scores:


---

We start by reading the number of test cases `T`. For each test case, we read the number of turns `N` and the string `S` which represents who won each point — `'A'` for Alice, `'B'` for Bob.

We initialize the scores of both players (`aliceScore` and `bobScore`) to zero. We also keep track of the current server with the variable `server`, which starts as `'A'` since Alice serves first.

---

The **do-while** loop processes each turn one by one, using an index `i` starting at 0:

* On each iteration, we check if the winner of the current point `S[i]` is the same as the current server.

  * If **yes**, it means the server won the point, so we increment the server's score (`aliceScore` or `bobScore`).
  * If **no**, the receiver won the point, so the server changes to the other player, but no points are added.

* We then increment `i` and repeat the loop as long as `i` is less than `N`, meaning all turns are processed.

---

After the loop finishes, we print the final scores of Alice and Bob.

Using a **do-while** loop ensures the body of the loop runs at least once, which is perfect here since we want to process all points starting from index 0. The logic inside the loop is the same as in the `for` loop version — it just uses a different looping structure.


