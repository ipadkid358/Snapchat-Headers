/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:51:45 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Snapchat/MGLStyleFunction.h>

@class NSDictionary;

@interface MGLCameraStyleFunction : MGLStyleFunction

@property (nonatomic,copy) NSDictionary * stops; 
+(id)functionWithInterpolationMode:(unsigned long long)arg1 stops:(id)arg2 options:(id)arg3 ;
-(id)initWithInterpolationBase:(double)arg1 stops:(id)arg2 ;
-(id)initWithInterpolationMode:(unsigned long long)arg1 stops:(id)arg2 options:(id)arg3 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
@end

