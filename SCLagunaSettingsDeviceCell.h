/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:37 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UITableViewCell.h>

@class SCLagunaDevice, SCLagunaAppStatusCoordinatorDeviceState, NSString, SCLagunaDeviceStateView, UIView, UILabel;

@interface SCLagunaSettingsDeviceCell : UITableViewCell {

	SCLagunaDevice* _device;
	SCLagunaAppStatusCoordinatorDeviceState* _state;
	NSString* _expandedText;
	SCLagunaDeviceStateView* _deviceIcon;
	UIView* _iconContainerView;
	UILabel* _batteryLevelLabel;
	UILabel* _deviceNameLabel;
	UILabel* _deviceConnectionStateLabel;
	UILabel* _deviceStatusDescriptionLabel;

}

@property (nonatomic,retain) SCLagunaDeviceStateView * deviceIcon;                         //@synthesize deviceIcon=_deviceIcon - In the implementation block
@property (nonatomic,retain) UIView * iconContainerView;                                   //@synthesize iconContainerView=_iconContainerView - In the implementation block
@property (nonatomic,retain) UILabel * batteryLevelLabel;                                  //@synthesize batteryLevelLabel=_batteryLevelLabel - In the implementation block
@property (nonatomic,retain) UILabel * deviceNameLabel;                                    //@synthesize deviceNameLabel=_deviceNameLabel - In the implementation block
@property (nonatomic,retain) UILabel * deviceConnectionStateLabel;                         //@synthesize deviceConnectionStateLabel=_deviceConnectionStateLabel - In the implementation block
@property (nonatomic,retain) UILabel * deviceStatusDescriptionLabel;                       //@synthesize deviceStatusDescriptionLabel=_deviceStatusDescriptionLabel - In the implementation block
@property (nonatomic,retain) SCLagunaDevice * device;                                      //@synthesize device=_device - In the implementation block
@property (nonatomic,retain) SCLagunaAppStatusCoordinatorDeviceState * state;              //@synthesize state=_state - In the implementation block
@property (nonatomic,copy) NSString * expandedText;                                        //@synthesize expandedText=_expandedText - In the implementation block
-(void)refreshSpectaclesStatusIcon:(id)arg1 ;
-(void)setBatteryLevelLabel:(UILabel *)arg1 ;
-(UILabel *)batteryLevelLabel;
-(void)setDeviceConnectionStateLabel:(UILabel *)arg1 ;
-(UILabel *)deviceConnectionStateLabel;
-(void)setDeviceStatusDescriptionLabel:(UILabel *)arg1 ;
-(UILabel *)deviceStatusDescriptionLabel;
-(void)_refreshDeviceInformation;
-(void)setExpandedText:(NSString *)arg1 ;
-(NSString *)expandedText;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(SCLagunaAppStatusCoordinatorDeviceState *)state;
-(void)setState:(SCLagunaAppStatusCoordinatorDeviceState *)arg1 ;
-(void)setDeviceIcon:(SCLagunaDeviceStateView *)arg1 ;
-(SCLagunaDeviceStateView *)deviceIcon;
-(UILabel *)deviceNameLabel;
-(void)setDeviceNameLabel:(UILabel *)arg1 ;
-(SCLagunaDevice *)device;
-(void)setDevice:(SCLagunaDevice *)arg1 ;
-(UIView *)iconContainerView;
-(void)setIconContainerView:(UIView *)arg1 ;
@end

