/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:45 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface SCAltitude : NSObject {

	double _altitudeInMeters;
	unsigned long long _unit;
	unsigned long long _viewType;

}

@property (assign,nonatomic) double altitudeInMeters;                  //@synthesize altitudeInMeters=_altitudeInMeters - In the implementation block
@property (assign,nonatomic) unsigned long long unit;                  //@synthesize unit=_unit - In the implementation block
@property (assign,nonatomic) unsigned long long viewType;              //@synthesize viewType=_viewType - In the implementation block
-(double)altitudeInMeters;
-(id)initWithAltitudeInMeters:(double)arg1 unit:(unsigned long long)arg2 viewType:(unsigned long long)arg3 ;
-(id)initWithAltitudeInMeters:(double)arg1 userSession:(id)arg2 ;
-(void)setAltitudeInMeters:(double)arg1 ;
-(unsigned long long)viewType;
-(unsigned long long)unit;
-(void)setUnit:(unsigned long long)arg1 ;
-(void)setViewType:(unsigned long long)arg1 ;
@end

