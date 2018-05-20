/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:02 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Snapchat/Snapchat-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface SCStoriesMediaCaption : NSObject <NSCopying> {

	NSString* _text;
	long long _orientation;
	double _position;

}

@property (nonatomic,copy,readonly) NSString * text;               //@synthesize text=_text - In the implementation block
@property (nonatomic,readonly) long long orientation;              //@synthesize orientation=_orientation - In the implementation block
@property (nonatomic,readonly) double position;                    //@synthesize position=_position - In the implementation block
-(id)initWithText:(id)arg1 orientation:(long long)arg2 position:(double)arg3 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(long long)orientation;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)text;
-(double)position;
@end
