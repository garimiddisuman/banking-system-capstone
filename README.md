### How to Build and Run the Code

1. Create a `build` directory in the root of the project.
2. From the project root, run the following commands to configure and build the project:

   ```bash
   cmake -S . -B build
   cmake --build build
   ```

3. Once the build is complete, run the executable:

   ```bash
   ./build/bankApp
   ```