/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:03 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Snapchat/Snapchat-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSDictionary;

@interface SCSearchEvent : NSObject <NSCopying> {

	NSString* _eventName;
	NSString* _announcerIdentifier;
	NSDictionary* _extraData;

}

@property (nonatomic,copy,readonly) NSString * eventName;                        //@synthesize eventName=_eventName - In the implementation block
@property (nonatomic,copy,readonly) NSString * announcerIdentifier;              //@synthesize announcerIdentifier=_announcerIdentifier - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * extraData;                    //@synthesize extraData=_extraData - In the implementation block
-(id)initWithEventName:(id)arg1 announcerIdentifier:(id)arg2 extraData:(id)arg3 ;
-(NSString *)announcerIdentifier;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)eventName;
-(NSDictionary *)extraData;
@end

