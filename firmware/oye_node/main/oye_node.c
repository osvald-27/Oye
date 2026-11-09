#include <inttypes.h>

#include "esp_chip_info.h"
#include "esp_log.h"
#include "esp_system.h"
#include "freertos/FreeRTOS.h"
#include "freertos/task.h"

static const char *TAG="OYE";

void app_main(void) {
	/* Prepare an esp_chip_info_t  structure to read from
	 * the esp chip infomation, populate it esp_chip_info()
	 * At the address of chip_info on chip
	 */
	esp_chip_info_t chip_info = {0};
	esp_chip_info(&chip_info);

	ESP_LOGI(TAG, "|==================================|");
	ESP_LOGI(TAG, "|      OYE HARDWARE BRING-UP       |");
	ESP_LOGI(TAG, "|==================================|");
	//Know the software environment.
	ESP_LOGI(TAG, "ESP-IDF version: %s", esp_get_idf_version());

	//Identify processor characteristics.
	ESP_LOGI(TAG, "CPU cores: %u", (unsigned)chip_info.cores);
	ESP_LOGI(TAG, "Chip revision: %u", (unsigned)chip_info.revision);
	
	//Inspect runtime memory
	ESP_LOGI(TAG, "Free heap at startup: %" PRIu32 " bytes",
			esp_get_free_heap_size());
	
	ESP_LOGI(TAG, "Minimum free heap: %" PRIu32 "bytes",
			esp_get_minimum_free_heap_size());

	//Record why the processor booted
	ESP_LOGI(TAG, "Reset code: %d", (int)esp_reset_reason());

	//Keep it always running
	while (1) {
		ESP_LOGI(TAG, 
			"Oye node alive and healthy. Free heap: %" 
			PRIu32 " byte",
			esp_get_free_heap_size());
		//Block this task for five seconds
		//other ready FreeRTOS can execute
		vTaskDelay(pdMS_TO_TICKS(5000));
	}
}
