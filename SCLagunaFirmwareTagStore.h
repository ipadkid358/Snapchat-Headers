/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:18 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol SCLagunaFirmwareTagStoreDelegate;
@class NSArray, SCSessionRequestManager;

@interface SCLagunaFirmwareTagStore : NSObject {

	NSArray* _tags;
	SCSessionRequestManager* _requestManager;
	id<SCLagunaFirmwareTagStoreDelegate> _delegate;

}

@property (nonatomic,retain) SCSessionRequestManager * requestManager;                          //@synthesize requestManager=_requestManager - In the implementation block
@property (assign,nonatomic,__weak) id<SCLagunaFirmwareTagStoreDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) NSArray * tags;                                                    //@synthesize tags=_tags - In the implementation block
-(id)initWithRequestManager:(id)arg1 delegate:(id)arg2 ;
-(id)_requestParams;
-(id)firmwareTagForDevice:(id)arg1 ;
-(id)latestVersionForDevice:(id)arg1 ;
-(id)minimumRequiredVersionForDevice:(id)arg1 ;
-(void)fetchLatestFirmwareVersion;
-(BOOL)hasLatestFirmwareVersion;
-(BOOL)deviceHasLatestFirmware:(id)arg1 ;
-(BOOL)deviceHasMinimumRequiredFirmware:(id)arg1 ;
-(NSArray *)tags;
-(void)setDelegate:(id<SCLagunaFirmwareTagStoreDelegate>)arg1 ;
-(id<SCLagunaFirmwareTagStoreDelegate>)delegate;
-(void)setTags:(NSArray *)arg1 ;
-(SCSessionRequestManager *)requestManager;
-(void)setRequestManager:(SCSessionRequestManager *)arg1 ;
@end
