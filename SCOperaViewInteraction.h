/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:20 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <Snapchat/Snapchat-Structs.h>
@interface SCOperaViewInteraction : NSObject {

	unsigned long long _type;
	CGPoint _location;

}

@property (nonatomic,readonly) unsigned long long type;              //@synthesize type=_type - In the implementation block
@property (nonatomic,readonly) CGPoint location;                     //@synthesize location=_location - In the implementation block
+(id)interactionWithType:(unsigned long long)arg1 ;
+(id)interactionWithType:(unsigned long long)arg1 location:(CGPoint)arg2 ;
-(id)initWithType:(unsigned long long)arg1 location:(CGPoint)arg2 ;
-(unsigned long long)type;
-(id)initWithType:(unsigned long long)arg1 ;
-(CGPoint)location;
@end
