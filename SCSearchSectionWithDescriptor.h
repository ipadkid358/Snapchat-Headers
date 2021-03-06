/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:12 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol SCSearchCollectionViewSection;
@class SCSearchResultSectionDescriptor;

@interface SCSearchSectionWithDescriptor : NSObject {

	id<SCSearchCollectionViewSection> _section;
	SCSearchResultSectionDescriptor* _descriptor;

}

@property (nonatomic,readonly) id<SCSearchCollectionViewSection> section;                      //@synthesize section=_section - In the implementation block
@property (nonatomic,copy,readonly) SCSearchResultSectionDescriptor * descriptor;              //@synthesize descriptor=_descriptor - In the implementation block
-(id)initWithSection:(id)arg1 descriptor:(id)arg2 ;
-(id<SCSearchCollectionViewSection>)section;
-(SCSearchResultSectionDescriptor *)descriptor;
@end

