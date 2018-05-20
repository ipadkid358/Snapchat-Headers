/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:51:46 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Snapchat/MLFeatureProvider.h>

@class NSMutableDictionary, NSSet;

@interface CoreMLWrapperOutput : NSObject <MLFeatureProvider> {

	NSMutableDictionary* _multiArrayDict;
	NSSet* _nameSet;

}

@property (nonatomic,retain) NSSet * nameSet;                                   //@synthesize nameSet=_nameSet - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * multiArrayDict;              //@synthesize multiArrayDict=_multiArrayDict - In the implementation block
@property (nonatomic,readonly) NSSet * featureNames; 
-(id)featureValueForName:(id)arg1 ;
-(NSSet *)featureNames;
-(id)initWithOutputNameSet:(id)arg1 ;
-(NSMutableDictionary *)multiArrayDict;
-(void)setMultiArrayDict:(NSMutableDictionary *)arg1 ;
-(NSSet *)nameSet;
-(void)setNameSet:(NSSet *)arg1 ;
@end
