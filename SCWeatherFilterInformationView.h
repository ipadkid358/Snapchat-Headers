/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:45 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Snapchat/Snapchat-Structs.h>
#import <UIKit/UIView.h>

@class UILabel, UIImageView;

@interface SCWeatherFilterInformationView : UIView {

	UILabel* _locationNameLabel;
	UILabel* _bottomTemperatureScaleLabel;
	UIImageView* _informationViewDividerImage;
	double _informationDividerHeight;
	BOOL _isPreviewSticker;

}
-(void)updateTemperatureScale:(unsigned long long)arg1 ;
-(BOOL)shouldResponseToTap:(id)arg1 ;
-(id)_stringForTemperatureScale:(unsigned long long)arg1 ;
-(id)initWithFrame:(CGRect)arg1 locationName:(id)arg2 temperatureScale:(unsigned long long)arg3 isPreviewSticker:(BOOL)arg4 ;
@end

