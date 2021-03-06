/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:45 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Snapchat/Snapchat-Structs.h>
#import <Snapchat/SCOverlayFilterView.h>

@protocol SCWeatherFilterViewDelegate;
@class SCWeatherHourlyView, SCWeatherDailyView, SCWeatherFilterInformationView, SCWeatherViewMetrics, NSArray, NSString, SCUserSession, SCFilterViewMetrics, UILabel, UIView;

@interface SCWeatherFilterView : SCOverlayFilterView {

	SCWeatherHourlyView* _hourlyWeatherView;
	SCWeatherDailyView* _dailyWeatherView;
	SCWeatherFilterInformationView* _informationView;
	SCWeatherViewMetrics* _weatherViewMetrics;
	BOOL _shouldDisplayForecast;
	BOOL _shouldDisplayInformationView;
	NSArray* _hourlyForecasts;
	NSArray* _dailyForecasts;
	NSString* _locationName;
	SCUserSession* _userSession;
	BOOL _assetsDownloaded;
	CGAffineTransform _orientationTransform;
	SCFilterViewMetrics* _filterViewMetrics;
	long long _weatherViewType;
	id<SCWeatherFilterViewDelegate> _delegate;
	UILabel* _degreeLabel;
	long long _orientation;
	long long _roundedTempDegCelsius;
	long long _roundedTempDegFahrenheit;
	UILabel* _temperatureLabel;
	UILabel* _temperatureScaleLabel;
	UIView* _temperatureView;

}

@property (nonatomic,retain) UILabel * degreeLabel;                                        //@synthesize degreeLabel=_degreeLabel - In the implementation block
@property (assign,nonatomic) long long orientation;                                        //@synthesize orientation=_orientation - In the implementation block
@property (assign,nonatomic) long long roundedTempDegCelsius;                              //@synthesize roundedTempDegCelsius=_roundedTempDegCelsius - In the implementation block
@property (assign,nonatomic) long long roundedTempDegFahrenheit;                           //@synthesize roundedTempDegFahrenheit=_roundedTempDegFahrenheit - In the implementation block
@property (nonatomic,retain) UILabel * temperatureLabel;                                   //@synthesize temperatureLabel=_temperatureLabel - In the implementation block
@property (nonatomic,retain) UILabel * temperatureScaleLabel;                              //@synthesize temperatureScaleLabel=_temperatureScaleLabel - In the implementation block
@property (nonatomic,retain) UIView * temperatureView;                                     //@synthesize temperatureView=_temperatureView - In the implementation block
@property (nonatomic,readonly) long long weatherViewType;                                  //@synthesize weatherViewType=_weatherViewType - In the implementation block
@property (assign,nonatomic,__weak) id<SCWeatherFilterViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(id)initWithFrame:(CGRect)arg1 config:(id)arg2 userSession:(id)arg3 ;
-(void)setFilterViewMetrics:(id)arg1 ;
-(id)filterViewMetrics;
-(BOOL)shouldRespondToTap:(id)arg1 ;
-(id)_stringForTemperatureScale:(unsigned long long)arg1 ;
-(void)setTemperatureView:(UIView *)arg1 ;
-(UIView *)temperatureView;
-(void)setDegreeLabel:(UILabel *)arg1 ;
-(UILabel *)degreeLabel;
-(void)setTemperatureScaleLabel:(UILabel *)arg1 ;
-(UILabel *)temperatureScaleLabel;
-(void)setRoundedTempDegCelsius:(long long)arg1 ;
-(void)setRoundedTempDegFahrenheit:(long long)arg1 ;
-(void)setTemperatureToDisplay;
-(void)_validateForecastData:(id)arg1 ;
-(void)_updateWeatherFilterView:(unsigned long long)arg1 ;
-(long long)roundedTempDegCelsius;
-(id)_stringForTemperature:(unsigned long long)arg1 ;
-(void)_regenerateViews;
-(void)_switchTemperatureScale:(unsigned long long)arg1 ;
-(void)_onTapInformationView:(unsigned long long)arg1 ;
-(void)_updateHourlyForecastView:(unsigned long long)arg1 ;
-(void)_updateDailyForecastView:(unsigned long long)arg1 ;
-(long long)roundedTempDegFahrenheit;
-(void)_updateInformationView:(unsigned long long)arg1 ;
-(void)_updateMetricsWithTemperatureScale:(unsigned long long)arg1 ;
-(void)_updateMetricsWithViewType;
-(long long)weatherViewType;
-(void)setDelegate:(id<SCWeatherFilterViewDelegate>)arg1 ;
-(id<SCWeatherFilterViewDelegate>)delegate;
-(void)setOrientation:(long long)arg1 ;
-(long long)orientation;
-(void)setDisplayed:(BOOL)arg1 ;
-(void)tap:(id)arg1 ;
-(id)displayName;
-(void)setTemperatureLabel:(UILabel *)arg1 ;
-(UILabel *)temperatureLabel;
@end

