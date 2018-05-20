/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:12 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Snapchat/Snapchat-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSArray;

@interface SCSearchLoadingCellViewModel : NSObject <NSCopying> {

	long long _contentMode;
	NSArray* _loadingItems;
	UIEdgeInsets _edgeInsets;

}

@property (nonatomic,readonly) UIEdgeInsets edgeInsets;                  //@synthesize edgeInsets=_edgeInsets - In the implementation block
@property (nonatomic,readonly) long long contentMode;                    //@synthesize contentMode=_contentMode - In the implementation block
@property (nonatomic,copy,readonly) NSArray * loadingItems;              //@synthesize loadingItems=_loadingItems - In the implementation block
-(id)initWithEdgeInsets:(UIEdgeInsets)arg1 contentMode:(long long)arg2 loadingItems:(id)arg3 ;
-(NSArray *)loadingItems;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(UIEdgeInsets)edgeInsets;
-(long long)contentMode;
@end

