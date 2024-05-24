import nbformat as nbf

# Read the Python script
with open('Pandas Complete Series/Aggregation operations with Series/Variance.py', 'r') as f:
    code = f.read()

# Create a new notebook object
nb = nbf.v4.new_notebook()

# Add the Python code to a cell
nb.cells.append(nbf.v4.new_code_cell(code))

# Write the notebook to a file
with open('Output/Variance.ipynb', 'w') as f:
    nbf.write(nb, f)
