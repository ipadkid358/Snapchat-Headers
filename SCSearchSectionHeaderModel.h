/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:11 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Snapchat/Snapchat-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface SCSearchSectionHeaderModel : NSObject <NSCopying> {

	BOOL _shouldShowQueryStatus;
	long long _displayStrategy;
	NSString* _sectionTitle;

}

@property (nonatomic,readonly) long long displayStrategy;                 //@synthesize displayStrategy=_displayStrategy - In the implementation block
@property (nonatomic,copy,readonly) NSString * sectionTitle;              //@synthesize sectionTitle=_sectionTitle - In the implementation block
@property (nonatomic,readonly) BOOL shouldShowQueryStatus;                //@synthesize shouldShowQueryStatus=_shouldShowQueryStatus - In the implementation block
-(BOOL)shouldShowQueryStatus;
-(id)initWithDisplayStrategy:(long long)arg1 sectionTitle:(id)arg2 shouldShowQueryStatus:(BOOL)arg3 ;
-(long long)displayStrategy;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)sectionTitle;
@end

