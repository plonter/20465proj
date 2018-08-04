#include "header.h"

int cleanup(Control *ctrl) {
  if (ctrl->fp)
    if (fclose(ctrl->fp) == EOF)
      return !OK;
  free_list(&ctrl->errors_array);
  free_list(&ctrl->inst_array);
  free_list(&ctrl->data_array);
  free_list(&ctrl->symbol_table);
  return OK;
}