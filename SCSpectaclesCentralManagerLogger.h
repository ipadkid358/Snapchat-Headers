/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:15 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Snapchat/SCSpectaclesCBCentralManagerEventListener.h>

@protocol SCLagunaEventListener;
@class NSString;

@interface SCSpectaclesCentralManagerLogger : NSObject <SCSpectaclesCBCentralManagerEventListener> {

	id<SCLagunaEventListener> _listener;

}

@property (assign,nonatomic,__weak) id<SCLagunaEventListener> listener;              //@synthesize listener=_listener - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id<SCLagunaEventListener>)listener;
-(void)setListener:(id<SCLagunaEventListener>)arg1 ;
-(id)initWithListener:(id)arg1 ;
-(void)centralManagerDidUpdateState:(id)arg1 ;
@end

